#include<iostream>
using namespace std;


bool BinarySearch(int arr[], int start, int end, int key)
{
    //base case
    int mid = start+(end - start)/2;
    if (start > end)
    {
        return false;
    }
    
    else
    {
        if (arr[mid]==key)
        {
            return true;
        }
        if (arr[mid]<key)
        {
            return BinarySearch(arr,mid +1,end, key);
        }
        else
        {
            return BinarySearch(arr,start,mid -1, key);
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
    
    if (BinarySearch(arr,0,size-1,key))
    {
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    
    return 0;
}