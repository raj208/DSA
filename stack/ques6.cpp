// two stack in a single array
#include<stack>
#include<iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top1;
        int top2;
        

    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int element)
    {
        if (top2 - top1 > 0)
        {
            top1++;
            arr[top1] = element;
        }
        
    }

    void push2(int element)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = element;
        }
        
    }

    void pop1()
    {
        if (top1 >=0)
        {
            top1--;
        }
        
    }

    void pop2()
    {
        if (top2 < size)
        {
            top2++;
        }
        
    }

    int peek1()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
            
    }

    int peek2()
    {
        if (top1 < 5)
        {
            return arr[top2];
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
            
    }

};

int main(){
    
    Stack st(5);

    st.push1(3);
    st.push2(3);
    st.push1(5);
    st.push2(5);
    st.push2(3); //3 5 3 5 3

    cout<<"Displaying first Stack"<<endl;
    for (int i = 0; i < 2; i++)
    {
        cout<<st.peek1()<<" "<<endl;
        st.pop1();
    }

    cout<<"Displaying second Stack"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<st.peek2()<<" "<<endl;
        st.pop2();
    }
    
    return 0;
}