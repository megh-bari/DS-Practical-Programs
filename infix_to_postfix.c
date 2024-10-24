#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) { if (top < MAX - 1) stack[++top] = c; }
char pop() { return (top >= 0) ? stack[top--] : '\0'; }
int precedence(char c) { return (c == '+' || c == '-') ? 1 : (c == '*' || c == '/') ? 2 : 0; }

void infixToPostfix(const char* expr) {
    char output[MAX];
    int j = 0;

    for (int i = 0; expr[i]; i++) {
        if (isalnum(expr[i])) output[j++] = expr[i];
        else if (expr[i] == '(') push(expr[i]);
        else if (expr[i] == ')') { while (top >= 0 && stack[top] != '(') output[j++] = pop(); pop(); }
        else { while (top >= 0 && precedence(stack[top]) >= precedence(expr[i])) output[j++] = pop(); push(expr[i]); }
    }
    
    while (top >= 0) output[j++] = pop();
    output[j] = '\0';
    printf("Postfix: %s\n", output);
}

int main() {
    char expr[MAX];
    printf("Enter an infix expression: ");
    fgets(expr, MAX, stdin);
    infixToPostfix(expr);
    return 0;
}

// how to run:
// gcc -o infix_to_postfix infix_to_postfix.c
// ./infix_to_postfix

// Output:

// Enter an infix expression: A+B*(C-D)

//     or

// Enter an infix expression: (A+B)/(C-D)