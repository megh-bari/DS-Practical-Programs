#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *s) {
    s->top = -1;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

int isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

void push(struct Stack *s, int item) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->items[++s->top] = item;
    printf("Pushed %d into stack\n", item);
}

int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1; // Indicating error
    }
    return s->items[s->top--];
}

int peek(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1; // Indicating error
    }
    return s->items[s->top];
}

void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int main() {
    struct Stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    
    display(&s);
    
    printf("Top element is %d\n", peek(&s));
    
    printf("Popped element is %d\n", pop(&s));
    
    display(&s);

    return 0;
}


// how to run:

// gcc -o stack stack.c
// ./stack

// output:
// Pushed 10 into stack
// Pushed 20 into stack
// Pushed 30 into stack
// Stack elements: 10 20 30 
// Top element is 30
// Popped element is 30
// Stack elements: 10 20 