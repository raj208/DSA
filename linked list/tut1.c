#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
    
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr -> data);
        ptr = ptr-> next;
    }
    
}


struct Node * insertAtBottom( struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
} 

struct Node * insertAtIndex(struct Node * head, int data, int index)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i < (index - 1)) {
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;
    return head;
}


int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second-> next = third;

    third -> data = 66;
    third -> next = NULL;

    linkedListTraversal(head);
    head = insertAtBottom(head,101);
    printf("After inserting at bottom\n");
    linkedListTraversal(head);
    head = insertAtIndex(head,4444,4);
    printf("After inserting at index\n");
    linkedListTraversal(head);

    return 0;

}