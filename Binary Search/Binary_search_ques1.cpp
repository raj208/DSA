//find the left most and right most occurence index of the number

#include <iostream>
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
            ans = mid;  //important
            end = mid -1; //applied only for left part
        }

        //below algorithm will be use to find the key, if they are not present in the arr[mid]
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2 ;
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
        if (arr[mid] == key)
        {
            ans = mid;
            start = start + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2 ;
    }
    return ans;
}


int IncreasingOrder(int arr[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"Sorted array"<<endl;;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    
}

int main()
{
    int size, key;
    cout << "Enter the size of array" << endl;
    cin >> size;

    cout << "Enter the value of array" << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    IncreasingOrder(arr, size);
    
    cout << "Enter the key" << endl;
    cin >> key;
    int First_index = FirstOccurence(arr, size, key);
    cout << "The first Occurence of key is in Index no. " << First_index << endl;

    int Last_index = LastOccurence(arr, size, key);
    cout << "The last Occurence of key is in Index no. " << Last_index << endl;

    return 0;
}