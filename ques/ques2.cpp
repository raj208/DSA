#include<iostream>
#include<stack>

using namespace std;

int main()
{
	string str = "raj";
	stack<char> s;
	
	for(int i=0; i<str.length(); i++)
	{
		char c = str[i];
		s.push(c);
	}

	cout<<"Displaying reverse string"<<endl;

	for(int i=0; i<str.length(); i++)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}
