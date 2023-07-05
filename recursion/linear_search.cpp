#include<iostream>
using namespace std;


// ***function for understanding concept***
void print(int arr[], int size, int key)
{
    cout<<"size of array is "<<size <<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}


bool search(int arr[], int size, int key)
{
    print(arr,size,key);
    if (size== 0)
    {
        return false;
    }
    else
    {
        if (arr[0]==key)
        {
            return true;
        }
        else
        {
            bool ans = search(arr+1, size -1, key);
            return ans;
        }
        
    }
       
}

int main(){
    int size;
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }   

    int key;
    cin>>key;

    if (search(arr,size,key))
    {
        cout<<"key is present"<<endl;
    }
    else
    {
        cout<<"Key is not present"<<endl;
    }
    
    return 0;
}