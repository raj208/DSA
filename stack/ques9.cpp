//valid paranthesis

#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;

    stack<char>s;
    //opening paranthesis push;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c == '[' || '{' || '(')
        {
            s.push(c);
        }
        else
        {
            /* code */
        }
        
        
    }
    
    
    return 0;
}