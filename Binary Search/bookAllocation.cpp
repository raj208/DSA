#include<iostream>
#include<vector>
using namespace std;


bool isPossible(vector<int>arr, int size, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
                pageSum = arr[i];

        }
        if (studentCount > m)
        {
            return false;
        }
        
    }
    return true;
    
}
int allocateBooks(vector<int>arr, int size, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int ans = -1;
    int mid = s+(e-s)/2;

//binary search application
    while (s<=e)
    {
        if (isPossible(arr,size,m,mid))
        {
            ans = mid;
            e=mid-1;
        }
        else
        {
            s = mid +1;
        }       
        mid = s+(e-s)/2;
    }
    return ans;
    
    
}

int main(){
    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the value of array"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int m;
    cout<<"Enter the number of person"<<endl;
    cin>>m;

    int sol = allocateBooks(arr,size,m);
    cout<<sol;

    return 0;
}