#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int item) {
    if (top < MAX - 1) {
        stack[++top] = item;
        printf("%d pushed to stack\n", item);
    } else {
        printf("Stack Overflow!\n");
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack Underflow!\n");
        return -1; // Indicate error
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack contents: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    
    printf("%d popped from stack\n", pop());
    display();

    return 0;
}


// how to run:
// gcc -o stack stack.c
// ./stack