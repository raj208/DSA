#include <iostream>
#include <stack>

using namespace std;

// Function to insert an element at the bottom of a stack
void insertAtBottom(stack<int> &s, int value) {
    if (s.empty()) {
        s.push(value);
        return;
    }
    int topValue = s.top();
    s.pop();
    
    insertAtBottom(s, value);
    
    s.push(topValue);
}

// Function to reverse a stack using recursion
void reverseStack(stack<int> &s) {
    if (s.empty()) {
        return;
    }
    int topValue = s.top();
    s.pop();
    reverseStack(s);
    
    insertAtBottom(s, topValue);
    
}

int main() {
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
    
    reverseStack(s);
    
    cout << "\nReversed Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    
    cout << endl;
    
    return 0;
}


int main()
{
    the
}