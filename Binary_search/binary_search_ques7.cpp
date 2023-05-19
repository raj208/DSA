//******BOOK ALLOCATION PROBLEM*********

// You are given an array ‘pages’ of integer numbers. 
// In this array, the ‘pages[i]’ represents the number of pages in the ‘i-th’ book. 
// There are ‘m’ number of students, and the task is to allocate all the books to the students. 

// Allocate books in a way such that:

//1. Each student gets at least one book.
//2. Each book should be allocated to a student.
//3. Book allocation should be in a contiguous manner.
 
// You have to allocate the books to ‘m’ students such that 
// the maximum number of pages assigned to a student is minimum.

// refer notes for more understanding


#include<iostream>
using namespace std;

bool ifPossible(int arr[], int size, int students, int mid)
{
    int StudentCount = 1;
    int PageSum = 0;
    for (int  i = 0; i < size; i++)
    {
        if (PageSum + arr[i]<= mid)
        {
            
        }
        
    }
    
}

int BinarySearch(int arr[], int size,  int stu)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    int end = sum;
    int ans = -1;
    int mid = start +(end - start)/2;
    while (start<=end)
    {
        if (ifPossible(arr,size,stu, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start+ (end - start)/2;
    }
    return ans;
}

int main(){
    int saize,stu;
    cout<<"Enter the size of array"<<endl;
    cin>>saize;

    cout<<"Enter the number of students"<<endl;
    cin>>stu;
    
    int arr[saize];
    cout<<"Enter the value of array"<<endl;
    for (int  i = 0; i < saize; i++)
    {
        cin>>arr[i];
    }
    

    return 0;
}