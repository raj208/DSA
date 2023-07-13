#include <iostream>
using namespace std;

class Node
{
private:
public:
    int data;   // integer
    Node *next; // pointer

    Node(int data)
    { // function
        this->data = data;
        this->next = NULL;
    }
};

void InsrtAtHead(Node* &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void  InsertAtPosition(Node* &head,int position, int d)
{
    Node* temp = head;
    int cnt = 1;

    while (cnt<position-1)
    {
        temp = temp->next;
        cnt++;

        //creating a node for d
        Node* nodeToInsert = new Node(d);
        nodeToInsert ->next = temp -> next;
        temp -> next = nodeToInsert;
    }
    

}

void InsertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}


void print(Node* &head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(50);
    Node *node3 = new Node(100);
    // cout << node2->data << endl;
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    // Node *position = node1;
    print(head);

    InsrtAtHead(head,12);
    print(head);

    InsrtAtHead(head,15);
    print(head);

    InsertAtPosition(head,3,22);
    print(head);

    // print(head);

    // InsertAtTail(tail, 12);
    // print(head);

    // InsertAtTail(tail,15);
    // print(head);
    return 0;
}