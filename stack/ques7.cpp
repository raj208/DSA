// remove middle element

#include<iostream>
#include<stack>
using namespace std;

void removeMiddleElement(stack<int>&s, int size, int mid, int count =0)
{
    // int count = size-1;
    if (count == mid || s.empty() )
    {
        s.pop();
        return;
    }

    // count--;

    int topValue = s.top();
    s.pop();

    removeMiddleElement(s,size,mid, count+1);

    s.push(topValue);
    
}

void insertAtBttom(stack<int>&s, int element)
{
    if (s.empty())
    {
        s.push(element);
        return;
    }

    int topValue = s.top();
    s.pop();

    insertAtBttom(s,element);

    s.push(topValue);
    
}

void reverse(stack<int>&s)
{
    if (s.empty())
    {
        return;
    }

    int topValue = s.top();
    s.pop();

    reverse(s);
    insertAtBttom(s,topValue);
    
}

int main(){
    int size;
    cout<<"Enter the size of stack"<<endl;
    cin>>size;

    stack<int>s;

    cout<<"Enter the value of stack"<<endl;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin>>value;
        s.push(value);
    }

    int mid = size/2;

    cout << "Original Stack: ";
    stack<int> original = s; // Copying stack for display purposes
    while (!original.empty()) {
        cout << original.top() << " ";
        original.pop();
    }
    cout<<endl;

    removeMiddleElement(s,size,mid);

    
    cout << "Stack after removing middle element ";
    stack<int>reversed =s;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout<<endl;


    reverse(s);

    cout << "Reversed stack ";
    while (!reversed.empty()) {
        cout << reversed.top() << " ";
        reversed.pop();
    }
    cout<<endl;
    return 0;
}