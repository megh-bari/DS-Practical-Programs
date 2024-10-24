#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end
void insert(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData; newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* last = *head;
    while (last->next) last = last->next;
    last->next = newNode;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);

    printf("Linked List: ");
    printList(head);

    return 0;
}


// How to run:

// gcc -o linked_list linked_list.c
// ./linked_list

// Output:
// Linked List: 10 -> 20 -> 30 -> NULL