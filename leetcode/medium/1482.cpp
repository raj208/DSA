#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int makeboquets(vector<int>&v, int k, int mid)
{
    int consecutive = 0;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= mid)
        {
            consecutive++;
        }
        else {
            consecutive = 0;
        }
        if (consecutive == k)
        {
            count++;
            consecutive = 0;
        }
        
    }
    return count;
    

    
}

int sol(vector<int>&v, int m, int k)
{
    long n = v.size();
    if(n <= (long)m*k)
    {
        return -1;
    }
    int l = 0;
    int h = *max_element(v.begin(), v.end());
    int ans = -1;
   
    while (l<=h)
    {
         int mid = l+(h-l)/2;
        if (makeboquets(v, k, mid) >= m)
        {
            ans = mid;
            h = mid-1;
        }
        else
        {
            l = mid+1;
        }
        
    }
    return ans;
    
    
}

int main(){
    vector<int>v = {7,7,7,7,12,7,7};
    int m = 2;
    int k = 3;
    int ans = sol(v,m,k);
    cout<<endl;
    cout<<ans<<endl;
    return 0;
}