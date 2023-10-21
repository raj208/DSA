#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>arr, int n,int m, int mid)
{
    
}

int PainterPartition(vector<int>arr, int n, int m)
{
    int s = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;

    while (s<=e)
    {
        if (isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid -1;
        }
        else
        {
            s = mid +1;
        }
        
    }
    return ans;
    
}

int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the value of vector"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the no of painters"<<endl;
    cin>>m;
    
    return 0;
}