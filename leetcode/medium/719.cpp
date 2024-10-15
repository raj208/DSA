#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sol(vector<int>&nums, int k)
{
    int maxi = *max_element(begin(nums), end(nums));
    vector<int>differences(maxi+1, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            int diff = abs(nums[i]-nums[j]);
            differences[diff]++;

        }
    }
    for (int i = 0; i < differences.size(); i++)
    {
        k -= differences[i];
        if (k<=0)
        {
            return i;
        }
    }
    return -1;
    
}

int main(){
    vector<int>nums = {1,3,1};
    int k = 2;
    int ans = sol(nums, k);
    cout<<ans<<endl;
    return 0;
}