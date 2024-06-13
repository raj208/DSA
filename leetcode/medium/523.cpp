#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool sol(vector<int>&nums, int k)
{
    unordered_map<int, int>mp;
    int sum = 0;
    mp[0] = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        sum+=nums[i];
        int remiender = sum%k;
        if (mp.find(remiender) != mp.end())
        {
            // cout<<mp[remiender]<<" ";
            if (i - mp[remiender] >= 2)
            {
                return true;
            }
            else{
                mp[remiender] = i;
            }
        }
    }
    return false;
}

int main(){
    vector<int>nums = {23,2,4,6,7};
    int k = 6;
    bool ans = sol(nums, k);
    cout<<endl;
    cout<<ans<<endl;
    return 0;
}