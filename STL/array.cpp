#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,4> a = {1,2,3,4};
    array<int,0> b;
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"Elements at 1nd Index "<<a.at(1)<<endl;
    cout<<"array b Empty or not "<<b.empty()<<endl;
    cout<<"array a Empty or not "<<a.empty()<<endl;

    cout<<"First element "<<a.front()<<endl;
    cout<<"First element "<<a.back()<<endl;
    
    return 0;
}