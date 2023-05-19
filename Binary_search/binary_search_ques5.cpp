//search the key in Rotated and sorted array
//Time complexity should be O(logn)

#include<iostream>
using namespace std;

// int getKey(int arr[], int size, int key, int PivotIndex)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start)/2;
//     while (start <= end)
//     {
//         if (key >= arr[PivotIndex] && key <= arr[size-1])
//         {
//             start = PivotIndex;
//         }
//         else 
//         {
//             end = PivotIndex - 1;
//         }
//     }
//     return start;
    
// }

int BinarySearch(int arr[],int s, int e,int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start )/2;
    while (start <= end )
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return - 1;
    
}


int getPivot(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while (start < end)
    {
        if (arr[0] <= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start +(end - start)/2;
    }
    return start;  //you can return end/start, in the end both will point to line element
}

int getPosition(int arr[], int size, int key, int PivotIndex)
{
    if (key >= arr[PivotIndex] && key <= arr[size -1])
    {
        return BinarySearch(arr, PivotIndex, size -1, key);
    }
    else
    {
        return BinarySearch(arr, 0 ,PivotIndex -1, key);
    }
    
}

int main(){
    int size,key;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the value of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the key"<<endl;
    cin>>key;
    
    int PivotIndex = getPivot(arr,size);
    // cout<<"The Index value of pivot number is "<< PivotIndex<<endl;
    // int TargetIndex = getKey(arr,size,key,PivotIndex);
    // cout<<"The index Value of the key is "<<TargetIndex<<endl;
    int getPositionIndex = getPosition(arr,size,key,PivotIndex);
    cout<<"The Index value of key is "<<getPositionIndex<<endl;
    return 0;
}

//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