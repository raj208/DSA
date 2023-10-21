// REVERSING A STACK WITHOUT RECURSION

#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "majhi";
    stack<char>s;

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        s.push(c);
    }
    
    string ans = "";
    while (!s.empty())
    {
        char c = s.top();
        ans.push_back(c);

        s.pop();
    }
    
    cout<<ans;
    return 0;
}