#include <stdio.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push to stack
void push(char c) {
    if (top < MAX - 1) stack[++top] = c;
}

// Pop from stack
char pop() {
    return (top >= 0) ? stack[top--] : '\0';
}

// Check for balanced parentheses
int isBalanced(const char* expr) {
    for (int i = 0; expr[i]; i++) {
        if (expr[i] == '(') push('(');
        else if (expr[i] == ')') {
            if (pop() == '\0') return 0; // Unmatched closing parenthesis
        }
    }
    return top == -1; // Balanced if stack is empty
}

int main() {
    char expr[MAX];
    printf("Enter an expression: ");
    fgets(expr, MAX, stdin); // Read input expression

    printf("Parentheses are %s.\n", isBalanced(expr) ? "balanced" : "not balanced");
    return 0;
}


// how to run:
// open terminal and type:
// gcc -o parenthesis_matching parenthesis_matching.c
// ./parenthesis_matching

// and for output:
// Enter an expression: (a + b) * (c - d)
//     or
// Enter an expression: )a + b(
