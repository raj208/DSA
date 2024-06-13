#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    set<string>s;
    s.insert("abc");
    s.insert("raj");
    s.insert("xyz");
    s.insert("pqr");
    auto it = s.find("abc");

    // for(auto it = s.begin(); it!=s.end(); ++it)
    // {
    //     cout<<(*it) <<endl;
    // }

    for(string value:s)
    {
        cout<<value<<endl;
    }
    return 0;
}