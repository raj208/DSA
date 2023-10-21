//TRANSVERSAL AND INSERT

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *createNode(int data)
{
	struct node *n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = data;
	n->right = NULL;
	n->left = NULL;
	return n;
}

struct node *insert(struct node *root, int data)
{
	if (root == NULL)
	{
		return createNode(data);
	}

	if(data < root->data)
	{
		root->left= insert(root->left, data);
		printf("Inserted at left\n");
	}
	else if(data > root->data)
	{
		root->right = (insert(root->right, data));
		printf("Inserted at right\n");
	}
	return root;
}

void inOrder(struct node *root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		printf(" %d",root->data);
		inOrder(root->right);
	}

}

void preOrder(struct node *root)
{
	if(root!=NULL)
	{
		printf(" %d",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}

}

void postOrder(struct node *root)
{
	if(root!=NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		printf(" %d",root->data);
	}

}

int main()
{
	struct node* root = NULL;
	int nodes;
	printf("Enter the number of nodes\n");
	scanf("%d", &nodes);

	for(int i=0; i<nodes; i++)
	{
		int data;
		printf("Enter the data\n");
		scanf("%d", &data);
		root = insert(root, data);
	}

	printf("Displaying preOrder tree\n");
	preOrder(root);
	printf("\n");

	printf("Displaying inOrder tree\n");
	inOrder(root);
	printf("\n");

	printf("Displaying postOrder tree\n");
	postOrder(root);
	printf("\n");

	return 0;

}
