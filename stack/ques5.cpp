// REVERSE STACK WITH RECURSION

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int topvalue)
{
    if (s.empty())
    {
        s.push(topvalue);
        return;
    }
    
    int value = s.top();
    s.pop();
    insertAtBottom(s,topvalue);

    s.push(value);

}

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int topValue = s.top();
    s.pop();

    reverse(s);

    insertAtBottom(s, topValue);
    
}

int main(){
    stack<int> s;
    int n;

    cout << "Enter the number of elements in the stack: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        s.push(element);
    }

    cout << "Original Stack: ";
    stack<int> original = s; // Copying stack for display purposes
    while (!original.empty()) {
        cout << original.top() << " ";
        original.pop();
    }

    cout<<endl;

    reverse(s);

    cout<<"reversed stack: ";
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
     cout<<endl;

    return 0;
}