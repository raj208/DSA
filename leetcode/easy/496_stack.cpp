#include <iostream>
#include <vector>
#include <algorithm>
#include<stack>
#include<unordered_map>
using namespace std;

vector<int> sol(vector<int> &nums1, vector<int> &nums2)
{
    
    int n = nums2.size();
    //implemantation of monotonic stack
    unordered_map<int,int>umap;
    stack<int>st;
    for (int i = n-1; i >= 0; i--)
    {
        while (!st.empty() && st.top() < nums2[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            umap.insert({nums2[i], -1});
        }
        else{
            umap.insert({nums2[i], st.top()});
        }
        st.push(nums2[i]);
    }

    vector<int>ans;
    for(auto x:nums1)
    {
        ans.push_back(umap[x]);
    }
    return ans;
    
}

int main()
{
    vector<int> nums1 = {1,3,5,2,4,};
    vector<int> nums2 = {6,5,4,3,2,1,7};
    // vector<int> nums1 = {2,4};
    // vector<int> nums2 = {1,2,3,4};
    // vector<int> nums1 = {4,1,2};
    // vector<int> nums2 = {1,3,4,2};
    vector<int> ans = sol(nums1, nums2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;


    return 0;
}