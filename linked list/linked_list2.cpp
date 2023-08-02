#include<iostream>
using namespace std;

int main(){
    struct node
    {
        int data;
        node* next;
        node* prev;
    };

    node* head;
    node* tail;
    node* n;

    n = new node;
    n->data = 1;
    n-> prev = NULL;
    head = n;
    tail = n;

    n = new node;
    n-> data = 2;
    n-> prev = tail;
    tail->next=n;
    
    cout<< node-> data <<endl;
    return 0;
}