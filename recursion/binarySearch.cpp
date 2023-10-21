#include<iostream>
using namespace std;

bool BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    
    if (size == 0 )
    {
        return false;
    }
    else
    {
        if (arr[mid] == key)
        {
            return true;
        }
            
        if (key > arr[mid])
        {
            return BinarySearch(arr+mid+1, size - mid -1, key);
        }
        if (key < arr[mid])
        {
            return BinarySearch(arr,size - mid -1, key);
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

    if (BinarySearch(arr,size,key))
    {
        cout<<"key is present"<<endl;
    }
    else
    {
        cout<<"Key is not present"<<endl;
    }
    return 0;
}