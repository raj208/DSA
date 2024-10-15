#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int sol(vector<int>&nums)
{
    
    int n = nums.size();
    if (n<3)
    {
        return 0;
    }
    
    //prefixMax
    vector<int>prefixMax(n, -1);
    prefixMax[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        prefixMax[i-1]>nums[i] ? prefixMax[i] = prefixMax[i-1] : prefixMax[i] = nums[i];
    }

    //suffixMax
    vector<int>suffixMax(n, -1);
    suffixMax[n-1] = nums[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        suffixMax[i+1]>nums[i] ? suffixMax[i] = suffixMax[i+1] : suffixMax[i] = nums[i];
    }


    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int leftMax = suffixMax[i];
        int rightMax = prefixMax[i];
        ans+=min(leftMax,rightMax)-nums[i];

    }
    return ans;
    
    
    
}

int main(){
    vector<int>nums = {0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = sol(nums);
    cout<<ans<<endl;
    return 0;
}