// SELF MADE SEARCH FUNCTION FOR BST

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *insert(int data, struct node *root)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    if (root->data > data)
    {
        root->left = insert(data, root->left);
    }
    else if (root->data < data)
    {
        root->right = insert(data, root->right);
    }
    return root;
}

int search(struct node *root, int key)
{
    if (root != NULL)
    {
        if (key < root->data)
        {
            if (key == root->data)
            {
                return 1;
            }
            else
            {
                search(root->left, key);
            }
        }
        else
        {
            if (key == root->data)
            {
                return 1;
            }
            else
            {
                search(root->right, key);
            }
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct node *root = NULL;
    int n;
    printf("Enter the numbers of nodes\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int data;
        printf("Enter ther data to be inserted\n");
        scanf("%d", &data);
        root = insert(data, root);
    }

    int key;
    printf("Enter the key\n");
    scanf("%d", &key);

    if (search(root, key))
    {
        printf("Key is present\n");
    }
    else
    {
        printf("Key is not present\n");
    }

    return 0;
}
