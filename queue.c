#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX], front = -1, rear = -1;

void enqueue(int item) {
    if (rear < MAX - 1) {
        if (front == -1) front = 0;
        queue[++rear] = item;
        printf("%d enqueued\n", item);
    } else {
        printf("Queue Overflow!\n");
    }
}

int dequeue() {
    if (front != -1 && front <= rear) {
        return queue[front++];
    } else {
        printf("Queue Underflow!\n");
        return -1; // Indicate error
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++) printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10); enqueue(20); enqueue(30);
    display();
    
    printf("%d dequeued\n", dequeue());
    display();

    return 0;
}


// how to run:
// gcc -o queue queue.c
// ./queue