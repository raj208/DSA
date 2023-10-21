// DELETION

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right
};

struct node *initilize(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *insert(struct node *root, int data)
{
    if (root->data = NULL)
    {
        root = initilize(data);
    }
    if (root->data > data)
    {
        root->left = insert(root->left, data)
    }
    else if (root->data < data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void inOrder(struct node *root, int data)
{
    if (root!= NULL)
    {
        inOrder(root->left, data);
        printf("%d ", root->data);
        inOrder(root->right, data);
    }
}

