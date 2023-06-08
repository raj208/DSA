#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(9);
    s.insert(8);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"After Erase"<<endl;
    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    it++;

    s.erase(it);
    cout<<"After erasing second time "<<endl;
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 is present or not --> "<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(5);
    cout<<"value present at itr ->"<<*it<<endl; //stores the iterator

    for(auto it = itr; it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}