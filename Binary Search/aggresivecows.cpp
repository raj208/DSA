#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossible(vector<int>&stall, int n, int k, int mid)
{
    int cowsCount = 1;
    int lastPos = stall[0];
    
}

int binarySearch(vector<int>&stall, int n, int k)
{
    int s=0;
    int e = stall[n-1];
    int ans = -1;
    int mid = s+(e-s)/2;
    if (isPossible(stall,n,k,mid))
    {
        ans = mid;
        s=mid+1;
    }
    else
    {
        e = mid - 1;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;

    vector<int>stall(n);
    for (int i = 0; i < n; i++)
    {
        cin>>stall[i];
    }

    int k;
    cout<<"Enter the nnumbers of cows"<<endl;
    cin>>k;
    
}