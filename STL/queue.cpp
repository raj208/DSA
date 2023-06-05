#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("messi");
    q.push("mbappe");
    q.push("hakimi");
    q.push("neymar");

    cout<<"First Element-> "<<q.front()<<endl;
    q.pop();
    cout<<"First Element-> "<<q.front()<<endl;

    cout<<"Size "<<q.size();

    //similar to stack
    return 0;
}