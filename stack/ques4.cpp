// PUSH ELEMENT AT BOTTOM 

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    
    int value = s.top();
    s.pop();

    insertAtBottom(s,x);

    s.push(value);
}

int main(){
    stack<int> s;
    int n;

    cout<<"Enter the number of element in stack:"<<endl;
    cin>>n;

    cout<<"Enter the elements "<<endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin>>element;
        s.push(element);
    }
    
    int element;
    cout<<"Enter an elemment to be inserted at bottom"<<endl;
    cin>>element;

    cout<<"Original stack: "<<endl;
    stack<int> original = s;
    while (!original.empty())
    {
        cout<<original.top()<<" ";
        original.pop();
    }

    cout<<endl;
    

    insertAtBottom(s,element);

    cout<<"new stack: "<<endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout<<endl;
    return 0;
}