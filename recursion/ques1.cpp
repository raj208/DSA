#include<iostream>
using namespace std;

bool isSort(int arr[], int size)
{
    if (size ==0 || size ==1)
    {
        return true;
    }
    else
    {
        if (arr[0]>arr[1])
        {
            return false;
        }
        else
        {
            bool ans = isSort(arr+1,size -1);
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
    
    if (isSort(arr,size))
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
    
    return 0;
}