#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct{
	int data;
	Node* next;
}Node;

Node* createNode(int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if(newNode == NULL)
	{
		printf("Memory allocation failed");
		exit(1);
	}

	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

struct Node* insertAtBeginning( Node* head, int data)
{
	Node* newNode=createNode(data);
	newNode->next=head;
	return newNode;
}

void insertAtEnd(Node* head, int data)
{
	Node* newNode= createNode(data);
	if(head == NULL)
	{
		retutn newNode;
	}
	Node* current = head;
	while(current->next!=NULL)
	{
		current = current->next;
	}

	current->next=newNode;
}

void deleteAtFirst(Node* head)
{
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	Node* temp = head;
	head = head->next;
	free(temp);
}

void deleteAtEnd(Node* head)
{
	if(head == NULL)
	{
		printf("List is empty\n");
	}
	if(head->next == NULL)
	{
		free(head);
		head=NULL;
		return;
	}

	Node* current = head;
	Mode* previous = NULL;
	while(current->next!=NULL)
	{
		previous=current;
		current=current->next;
	}
	free(current);
	previous->next= NULL;
}

void display(Node* head)
{
	Node*  current = head;
	while(current != NULL)
	{
		printf("%d", current->data);
		current= current->next;
	}
	printf("\n");
}

int main()
{
	Node* head = NULL;
	while(1)
	{
		printf("1. Insert at first\n");
		printf("2. Insert at last\n");
		printf("3. delete at first\n");
		printf("4. delete at end\n");
		printf("5. display data\n");

		switch(choice)
		{
			case 1:
				printf("Enter the value to be inserted at first\n");
				int value1;
				scanf("%d",&value1);
				insertAtFirst(head,value1);
				break;
			case 2:
				printf("Enter the value to be inserted at last\n");
				int value2;
				scanf("%d",&value2);
				insertAtEnd(head,value2);
				break;
			case 3:
				printf("Deleted first element\n");
				deleteAtFirst(head);
				break;
			case 4: 
				printf("Deletd last element\n");
				deletAtsecond(head);
				break;
			case 5:
				printf("Printing the values\n");
				display(head);
				break;

			default:
				printf("Invalid choice\n");
		}
	}
	return 0;
}
