#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int maxWidth(vector<int>&nums)
{
    // stack<int>s;
    int maxi = 0;
    int temp = 0;
    int size = nums.size();
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (nums[j]>=nums[i])
            {
                temp = j-i;
            }
            maxi = max(maxi,temp);
        }
    }
    return maxi;
}

int main(){
    vector<int>nums = {6,0,8,2,1,5};
    // vector<int>nums = {9,8,1,0,1,9,4,0,4,1};
    int ans = maxWidth(nums);
    cout<<ans<<endl;
    return 0;
}