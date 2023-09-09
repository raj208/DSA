// infix,prefix,postfix using stack
// x + y * z - k

#include<iostream>
#include<stack>
using namespace std;

int precidence(char infix,char a, char b,char c, char d)
{
    if (infix == a || infix == b)
    {
        return 1;
    }

    else if (infix == c || infix == d)
    {
        return 2;
    }

    else
    {
        return 0;
    }
    
    
}

bool isOperator(char infix,char a, char b,char c, char d)
{
    if (infix == a || infix == b || infix == c || infix == d)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main(){

    char a = '-';
    char b = '+';
    char c = '/';
    char d = '*';
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    // char *infix = new char[size];
    char infix[size];
    char postfix[size];

    cout<<"Enter the infix values"<<endl;
    for (int i = 0; i <size ; i++)
    {
        cin>>infix[i];
    }

    stack<char>s;

    int i=0; //for infix
    int j=0; //for postfix

    while (i<size)
    {
        if (!isOperator(infix[i],a,b,c,d))
        {
            postfix[j] = infix[i];
            i++;
            j++;
            cout<<"First if statement is working"<<endl;
        }
        else
        {
            if (precidence(infix[i],a,b,c,d) >= precidence(s.top(),a,b,c,d) || s.empty() )
            {
                s.push(infix[j]);
                cout<<"First else statement is working"<<endl;
            }
            else
            {
                postfix[j] = s.top();
                s.pop();
                j++;
                cout<<"second else statement is working"<<endl;
            }
            
        }
        
    }

    while (!s.empty())
    {
        postfix[j] = s.top();
        s.pop();
        j++;
        cout<<"Second while is working"<<endl;
    }
    
    cout<<"Printing postfix values "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<postfix[i]<<" ";
    }
    cout<<endl;
    

    
    return 0;
}