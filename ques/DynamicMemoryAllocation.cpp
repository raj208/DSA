#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int *arr = new int[size];

    cout<<"Enter the value of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Displaying array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<  arr[i] <<" ";
    }

    cout<<endl;
    
    
    return 0;
}