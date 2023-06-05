#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(9);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(10);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(12);
    cout<<"Capacity ->"<<v.capacity()<<endl;

    cout<<"size-> "<<v.size()<<endl;

    cout<<"Element at 2nd Index "<<v.at(2)<<endl;

    cout<<"Front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();
    cout<<"After pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.clear();
    cout<<"After clear"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }     

    vector<int> a(5,5);
    cout<<"Print a vector"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    
    return 0;
}