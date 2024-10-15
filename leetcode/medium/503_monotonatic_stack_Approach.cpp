#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

vector<int>sol(vector<int>&nums)
{
    int n = nums.size();
    vector<int>ans(n,-1);
    stack<int>st;
    for (int i = (2*n)-1; i >= 0; i--)
    {
        int ele = i%n;
        while (!st.empty() && nums[ele] >= st.top())
        {
            st.pop();
        }
        if (i<n)
        {
            if (!st.empty())
            {
                ans[ele] = st.top();
            }
            
        }
        st.push(nums[ele]);
    }
    return ans;
    
}


int main(){
    // vector<int>nums = {1,2,1};
    vector<int>nums = {1,2,3,4,3};
    vector<int> ans = sol(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}


