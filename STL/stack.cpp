#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("messi");
    s.push("neymar");
    s.push("suarez");
    s.push("foden");

    cout<<"Top Element-> "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element-> "<<s.top()<<endl;

    cout<<"Size "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;
    return 0;
}