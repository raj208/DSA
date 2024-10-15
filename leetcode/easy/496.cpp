#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sol(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    vector<int>ans(n,-1);
    for (int i = 0; i < n; i++)
    {
        int index = 0;
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j])
            {
                index = j;
                break;
            }
            
        }
        for (int j = index+1; j < nums2.size(); j++)
        {
            if (nums1[i] < nums2[j])
            {
                ans[i] = nums2[j];
                break;
            }
            
        }
        
        
    }
    return ans;
    
}

int main()
{
    vector<int> nums1 = {1,3,5,2,4};
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