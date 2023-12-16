// *********REVISION************
//INSERT IN A BINARY TREE
// AND ITERATIVE SEARCH

#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left;
    struct node *right;
    int data;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->left = NULL;
    n->right = NULL;
    n->data = data;
    return n;
}

struct node *insert(struct node *root, int data)
{
    if (root==NULL)
    {
        createNode(data);
    }
    if (root->data > data)
    {
        root->left = insert(root->left,data);
    }
    else if (root->data < data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}

