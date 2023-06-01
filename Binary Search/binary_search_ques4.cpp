// user should provide rotated structure array
// need to find the pivot number in that array 
// the time complexity should be O(logn)

#include<iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while (start <  end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the value of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int Index = getPivot(arr, size);
    cout<<"The Index of Pivot number is "<<Index<<endl;
    
    return 0;
}

