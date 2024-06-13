#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int sol(int n, vector<int>&seg,vector<int>&dp)
{
    if (n == 0)
    {
        return 1;
    }

    if (dp[n] != 0)
    {
        return dp[n];
    }
    
    int maxi = INT32_MIN;
    for (int i = 0; i < seg.size(); i++)
    {
        dp[n] = sol(seg[i]-n, seg,dp);
        maxi = max(maxi,dp[n]);
    }
    return maxi;

}

int main(){
    int n = 7;
    vector<int>seg = {5,2,2};
    vector<int>dp{-1,n+1};
    int ans = sol(n,seg,dp);
    cout<<ans;
    return 0;
}

