#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    vector<int> v(size);
    cout<<"Enter the values of vector"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>v[i];
    }

    int del;
    cout<<"Enter the element position number to be deleted"<<endl;
    cin>>del;
    v.erase(v.begin()+del-1);

    int del_start, del_end;
    cout<<"Enter the element starting position"<<endl;
    cin>>del_start;
    cout<<"Enter the element ending position"<<endl;    
    cin>>del_end;
    v.erase(v.begin()+del_start-1,v.begin()+del_end-1);
    
    cout<<v.size()<<endl;

    cout<<"Ramaining numbers are:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}