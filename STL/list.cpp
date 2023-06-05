#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;  

    list<int> m(5,100);
    for(int i:m){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

     list<int> n(l); //copying the list l

    l.erase(l.begin());
    cout<<"After erase"<<endl;
    for(int i:l){
        cout<<i <<" ";
    }
    cout<<endl;

    cout<<"size of list " <<l.size()<<endl;
    

    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i <<" ";
    }
    return 0;
}