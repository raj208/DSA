#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int sol(vector<int>&nums, int k)
{
    int mini = *min_element(begin(nums), end(nums));
    int maxi = *max_element(begin(nums), end(nums));
    int n = maxi-mini;
    priority_queue<int>q;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            int diff = abs(nums[i]-nums[j]);
            q.push(diff);
        }
        
    }
    int q_size = q.size();
    int idx = abs(q_size-k);
    for (int i = 0; i < idx; i++)
    {
        // cout<<" value of i "<<i<<endl;
        // cout<<"printing top elements "<<q.top()<<endl;
        q.pop();
        
    }
    int ans = q.top();
    return ans;
    
    
}

int main(){
    vector<int>nums = {1,6,1};
    int k = 3;
    int ans = sol(nums, k);
    cout<<ans<<endl;
    return 0;
}