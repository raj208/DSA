#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size+top >= 0)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<<" Stack Overflow" <<endl;
        }
            
            
    }

    void pop()
    {
        if (top>=0)
        {
            top--;
        }
        else
        {
            cout<<" stack is under flow"<<endl;
        }
            
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
            
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


int main(){

    Stack st(5);
    
    st.push(22);
    st.push(43);
    st.push(34);
    st.push(75);
    // st.push(21);

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<st.peek()<<" ";
    //     st.pop();
    // }

    cout<< st.peek();
    st.pop();

    cout<< st.peek();


    
    return 0;
}