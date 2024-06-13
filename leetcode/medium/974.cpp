#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int sol(vector<int>&nums, int k)
{
    int n = nums.size();
    unordered_map<int, int>mp;
    mp[0] = 1;
    int sum = 0;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=nums[i];
        int remiender = sum%k;
        if (remiender < 0)
        {
            remiender+=k;
        }
        if (mp.find(remiender) != mp.end()) //if key is present
        {
            result+=mp[remiender];
        }
        mp[remiender]++;
    }
    return result;
}

int main(){
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    int ans = sol(nums, k);
    cout<<ans<<endl;
    return 0;
}