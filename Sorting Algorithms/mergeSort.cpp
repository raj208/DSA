#include<iostream>
using namespace std;

void merge(int *arr,int s, int e)
{

    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int index1,index2;
    index1=index2=0;

    int mainArrayIndex = s;
    for (int a = 0; a < len1; a++)
    {
        first[a] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for (int b = 0; b < len2; b++)
    {
        second[b] = arr[mainArrayIndex++];
        
    }
    
    mainArrayIndex = s;
    while (index1<len1 && index2<len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1<len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index1<len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
    delete []first;
    delete []second;
}

void dispaly(int arr[], int size)
{
    cout<<"Displaying sorted array"<<endl;
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


void mergeSort(int arr[], int s, int e)
{
    if (s<e)
    {
        int mid = (s+e)/2;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);
        merge(arr, s ,e);
    }
    else
    {
        return;
    }
    
    
}

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    cout<<"Enter the elements"<<endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    mergeSort(arr,0,size-1);
    dispaly(arr,size);

    
    return 0;
}