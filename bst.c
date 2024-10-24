#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node *left, *right;
};

struct Node *newNode(int key)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

struct Node *insert(struct Node *root, int key)
{
    if (!root)
        return newNode(key);
    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    return root;
}

void inorder(struct Node *root)
{
    if (root)
    {
        inorder(root->left);
        printf("%d -> ", root->key);
        inorder(root->right);
    }
}

struct Node *search(struct Node *root, int key)
{
    if (!root || root->key == key)
        return root;
    return search(key < root->key ? root->left : root->right, key);
}

int main()
{
    struct Node *root = NULL;
    int keys[] = {50, 30, 20, 40, 70, 60, 80};
    for (int i = 0; i < 7; i++)
        insert(root = insert(root, keys[i]), keys[i]);

    printf("Inorder: ");
    inorder(root);
    printf("NULL\n");

    int key = 40;
    printf("Key %d %s in the BST.\n", key, search(root, key) ? "found" : "not found");

    return 0;
}


// How to run:

// gcc -o bst bst.c
// ./bst


// Output:

// Inorder: 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> 80 -> NULL
// Key 40 found in the BST.