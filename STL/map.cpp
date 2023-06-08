#include<iostream>
#include<map>  //complexity O(logn)

using namespace std;

int main(){
    map<int, string> m;

    m[1] = "Raj";
    m[13] = "Majhi";
    m[2] = "Rajendra";
    m[3] = "Rohit";

    m.insert({5,"leetcode"});
    m.insert({20,"Zendaya"});

    for(auto i:m){
        cout<<i.first<< " "<<i.second<<endl;  //will be printed in sorted order
    }

    cout<<"Finding 10 ->" <<m.count(13)<<endl;

    // m.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<< " "<<i.second<<endl;
    }

    auto it = m.find(5);  //denoting value of 5, so it can print later
    for (auto i = it; i!=m.end() ; i++)
    {
        cout<<(*i).first<<endl; //this will print vlue after 5
    }
    
    
    return 0;
}