#include<iostream>
using namespace std;


void SelectionSort(int arr[], int size)
{
    int MinIndex;
    for (int i = 0; i < size - 1; i++)
    {
        MinIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[MinIndex])  //checking numbers which are smaller than MinIndex
            {
                MinIndex = j;  //updating MinIndex
            }
            
        }
        swap(arr[i],arr[MinIndex]);
        
    }
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
    
    SelectionSort(arr,size);
    cout<<"Sorted elements:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}