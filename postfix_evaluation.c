#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

// Stack structure
typedef struct {
    int data[MAX];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Function to push an element onto the stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        exit(1);
    }
    s->data[++(s->top)] = value;
}

// Function to pop an element from the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(1);
    }
    return s->data[(s->top)--];
}

// Function to evaluate a postfix expression
int evaluatePostfix(char *expression) {
    Stack s;
    initStack(&s);

    for (int i = 0; expression[i] != '\0'; i++) {
        // If the current character is an operand, push it onto the stack
        if (isdigit(expression[i])) {
            push(&s, expression[i] - '0');
        }
        // If the current character is an operator, pop two operands and apply the operator
        else {
            int operand2 = pop(&s);
            int operand1 = pop(&s);
            switch (expression[i]) {
                case '+': push(&s, operand1 + operand2); break;
                case '-': push(&s, operand1 - operand2); break;
                case '*': push(&s, operand1 * operand2); break;
                case '/': 
                    if (operand2 == 0) {
                        printf("Division by zero error\n");
                        exit(1);
                    }
                    push(&s, operand1 / operand2); 
                    break;
                default:
                    printf("Invalid operator encountered: %c\n", expression[i]);
                    exit(1);
            }
        }
    }

    // The final result should be the only element left in the stack
    return pop(&s);
}

// Main function
int main() {
    char expression[MAX];
    printf("Enter a postfix expression: ");
    scanf("%s", expression);

    int result = evaluatePostfix(expression);
    printf("The result of the postfix expression is: %d\n", result);

    return 0;
}


// how to run:
// gcc -o postfix_evaluation postfix_evaluation.c
// ./postfix_evaluation

// output:

// Enter a postfix expression: 53+82-*
// The result of the postfix expression is: 48
