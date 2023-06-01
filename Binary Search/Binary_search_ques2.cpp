//find the total number of occurence of the key using binary search 
//so that the time complexity becomes 0(logn) 

#include<iostream>
using namespace std;


int FirstOccurence(int arr[], int size, int key)
{
    int start = 0, ans = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
        
    }
    return ans;
    
}

int LastOccurence(int arr[], int size, int key)
{
    int start = 0, ans = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start =  mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans; 
}

int IncreasingOrder(int arr[],int size)
{
    for (int i = 0; i < size- 1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    cout<<"Sorted array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size, key;
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

    IncreasingOrder(arr,size);
    int LeftOccurence = FirstOccurence(arr,size, key);
    // cout<<"left occurence "<<LeftOccurence<<endl;
    int RightOccurence = LastOccurence(arr,size,key);
    // cout<<"Right Occurence "<<RightOccurence<<endl;
    int Occurence = RightOccurence - LeftOccurence + 1;
    cout<<"Total number of Occurence of the key is "<< Occurence<<endl;
    return 0;
}