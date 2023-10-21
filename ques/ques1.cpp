#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

int* createStack(int size) {
    int* stack = new int[size];
    return stack;
}

void push(int* stack, int& top, int element, int size) {
    if (top < size - 1) {
        top++;
        stack[top] = element;
    } else {
        cout << "Stack Overflow" << endl;
    }
}

void pop(int& top) {
    if (top >= 0) {
        top--;
    } else {
        cout << "Stack Underflow" << endl;
    }
}

int peek(int* stack, int top) {
    if (top >= 0) {
        return stack[top];
    } else {
        cout << "Stack is empty" << endl;
        return -1;
    }
}

bool isEmpty(int top) {
    return top == -1;
}

void reverse(int* stack)
{
    if (isEmpty)
    {
        return;
    }

    int topValue = stack.peek();
    
}

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    int* stack = createStack(size);
    int top = -1;

    cout << "Pushing elements into the stack:" << endl;
    for (int i = 0; i < size; i++) {
        int value;
        cout << "Enter value: ";
        cin >> value;
        push(stack, top, value, size);
    }

    cout << "Original Stack:" << endl;
    while (!isEmpty(top)) {
        cout << peek(stack, top) << " ";
        pop(top);
    }

    // delete[] stack;

    return 0;
}
