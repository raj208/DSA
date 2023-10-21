#include<iostream>
#include<stack>

using namespace std;

class Stack{
	public:
		int *arr;
		int top;
		int size;
	Stack(int size){
		this -> size = size;
		arr = new int[size];
		top = -1;
	}

	void push(int element)
	{
		if(size +top >= 0){
			top++;
			arr[top] = element;
		}
		else
		{
			cout<<"stack Overflow"<<endl;
		}
	}

	void pop(){
		if(top >= 0)
		{
			top--;
		}

		else
		{
			cout<<"Stack Underflow"<<endl;
		}
	}

	int peek()
	{
		if(top>=0)
		{
			return arr[top];
		}

		else
		{
			cout<<"Stack is empty"<<endl;
			return -1;
		}
	}

	bool isEmpty()
	{
		if(top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void insertAtBottom(Stack st(), int element)
	{
		if(isEmpty())
		{
			st.push(element);
			return;
		}

		int topValue = st.peek();
		st.pop();

		insertAtBottom(st,topValue);

		st.push(topValue);
	}

	int reverse(Stack st())
		{
			if(st.isEmpyt())
			{
				return;
			}

			int topValue = st.peek();
			st.pop();

			reverse(st);

			insertAtBottom(st,topValue);
		}
};





int main(){
	int num;
	cout<<"Enter the size of stack"<<endl;
	cin>>num;

	Stack st(num);
	
	cout<<"Enter the value of stack"<<endl;
	for(int i=0; i<num; i++)
	{
		int value;
		cin>>value;
		st.push(value);
	}
	
	cout<<"Original Stack"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<st.peek()<<" ";
		st.pop();
	}

	reverse(st);
	return 0;
}

