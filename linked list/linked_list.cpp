#include<iostream>
using namespace std;

class Node
{
private:
    
public:
    int data ; //integer
    Node* next; //pointer

    Node(int data){  //function
        this -> data = data;
        this -> next = NULL;
    }
};

void InsrtAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}


int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(50);
    cout<< node2 ->data <<endl;
    cout<< node1 ->data <<endl;
    cout<< node1 ->next <<endl;

    return 0;
}