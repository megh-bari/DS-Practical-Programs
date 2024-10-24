#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) { if (top < MAX - 1) stack[++top] = c; }
char pop() { return (top >= 0) ? stack[top--] : '\0'; }
int precedence(char c) { return (c == '+' || c == '-') ? 1 : (c == '*' || c == '/') ? 2 : 0; }

void reverse(char* expr) {
    int n = strlen(expr);
    for (int i = 0; i < n / 2; i++) {
        char temp = expr[i];
        expr[i] = expr[n - i - 1];
        expr[n - i - 1] = temp;
    }
}

void infixToPostfix(const char* expr, char* postfix) {
    int j = 0;
    for (int i = 0; expr[i]; i++) {
        if (isalnum(expr[i])) postfix[j++] = expr[i];
        else if (expr[i] == '(') push(expr[i]);
        else if (expr[i] == ')') { while (top >= 0 && stack[top] != '(') postfix[j++] = pop(); pop(); }
        else { while (top >= 0 && precedence(stack[top]) >= precedence(expr[i])) postfix[j++] = pop(); push(expr[i]); }
    }
    while (top >= 0) postfix[j++] = pop();
    postfix[j] = '\0';
}

void infixToPrefix(const char* infix, char* prefix) {
    char reversed[MAX], postfix[MAX];
    reverse(strcpy(reversed, infix));
    for (int i = 0; reversed[i]; i++) reversed[i] = (reversed[i] == '(') ? ')' : (reversed[i] == ')') ? '(' : reversed[i];
    infixToPostfix(reversed, postfix);
    reverse(postfix);
    strcpy(prefix, postfix);
}

int main() {
    char infix[MAX], prefix[MAX];
    printf("Enter an infix expression: ");
    fgets(infix, MAX, stdin);
    infixToPrefix(infix, prefix);
    printf("Prefix: %s\n", prefix);
    return 0;
}


// how to run:
// gcc -o infix_to_prefix infix_to_prefix.c
// ./infix_to_prefix

// output:

// Enter an infix expression: (A+B)*(C-D)

