#include<iostream>
#include<stack>

using namespace std;

class MyStack {
public:
    int *arr;
    int top;
    int size;

    MyStack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (top + 1 < size) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return (top == -1);
    }

    void insertAtBottom(int element) {
        if (isEmpty()) {
            push(element);
            return;
        }

        int topValue = peek();
        pop();

        insertAtBottom(element);

        push(topValue);
    }

    void reverse() {
        if (isEmpty()) {
            return;
        }

        int topValue = peek();
        pop();

        reverse();

        insertAtBottom(topValue);
    }
};

int main() {
    int num;
    cout << "Enter the size of stack" << endl;
    cin >> num;

    MyStack st(num);

    cout << "Enter the values of stack" << endl;
    for (int i = 0; i < num; i++) {
        int value;
        cin >> value;
        st.push(value);
    }

    cout << "Original Stack" << endl;
    for (int i = 0; i < num; i++) {
        cout << st.peek() << " ";
        st.pop();
    }

    cout << endl << "Reversed Stack" << endl;
    st.reverse();
    for (int i = 0; i < num; i++) {
        cout << st.peek() << " ";
        st.pop();
    }

    return 0;
}
