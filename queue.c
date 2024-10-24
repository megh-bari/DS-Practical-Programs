#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

void initialize(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(struct Queue *q) {
    return q->front == -1;
}

int isFull(struct Queue *q) {
    return q->rear == MAX_SIZE - 1;
}

void enqueue(struct Queue *q, int item) {
    if (!isFull(q)) {
        if (isEmpty(q)) q->front = 0; // First element
        q->items[++q->rear] = item;
        printf("Enqueued: %d\n", item);
    } else {
        printf("Queue is full!\n");
    }
}

int dequeue(struct Queue *q) {
    if (!isEmpty(q)) {
        int item = q->items[q->front];
        if (q->front >= q->rear) // Last element removed
            q->front = q->rear = -1;
        else
            q->front++;
        return item;
    }
    printf("Queue is empty!\n");
    return -1; // Error
}

void display(struct Queue *q) {
    if (!isEmpty(q)) {
        printf("Queue: ");
        for (int i = q->front; i <= q->rear; i++)
            printf("%d ", q->items[i]);
        printf("\n");
    } else {
        printf("Queue is empty!\n");
    }
}

int main() {
    struct Queue q;
    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    display(&q);
    
    printf("Dequeued: %d\n", dequeue(&q));
    display(&q);

    return 0;
}


// how to run:
// gcc -o queue queue.c
// ./queue