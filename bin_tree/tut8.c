//INSERT IN A BINARY TREE
// AND ITERATIVE SEARCH

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

//iterative search
struct node* search(struct node *root, int key)
{
    while (root!= NULL)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        } 
    }
    return NULL;
}

// void insertAtBetween(struct node *root, int data)
// {
//     // struct node *newNode;
//     if (root == NULL)
//     {
//         //base case
//         if (root->data < data)
//         {
//             root->right = createNode(data);
//         }
//         else
//         {
//             root->left = createNode(data);
//         }
//     }
//     else if (root->data < data)
//     {
//         // prev = root;
//         insertAtBetween(root->right, data);
//     }
//     else
//     {
//         // prev = root;
//         insertAtBetween(root->right, data);
//     }
// }

void inserAtMiddle(struct node *root, int data)
{
    struct node *prev = NULL;
    while (root!= NULL)
    {
        prev = root;
        if (data == root->data)
        {
            printf("Cannot be inserted\n");
            return;
        }
        else if (data<root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    struct node *new = createNode(data);
    if (data<prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

void inOrder(struct node *root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		printf("%d ",root->data);
		inOrder(root->right);
	}

}

void searchingData(struct node *root)
{
    int key;
    printf("Enter the key\n");
    scanf("%d", &key);

    struct node *node = search(root, key);

    if (node !=NULL)
    {
        printf("Key is present\n");
    }
    else
    {
        printf("Key is not present\n");
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


    int num;
    printf("Enter the new data to be inserted\n");
    scanf("%d", &num);

    inserAtMiddle(root,num);

    inOrder(root);

    printf("\n");
    
    searchingData(root);

    return 0;
}
