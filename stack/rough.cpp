// *********DO NOT RUB***************

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int value){
    if (s.empty())
    {
        s.push(value);
        return;
    }
    int topValue = s.top();
    s.pop();

    insertAtBottom(s,value);

    s.push(topValue);
    
}

void reverseStack(stack<int> &s){
    if (s.empty())
    {
        return;
    }
    int topValue = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s,topValue);
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
    
    cout<<"Original stack: "<<endl;
    stack<int> original = s;
    while (!original.empty())
    {
        cout<< original.top()<<" ";
        original.pop();
    }
    
    return 0;
}

