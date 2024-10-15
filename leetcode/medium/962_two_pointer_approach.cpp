#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxWidth(vector<int> &nums)
{
    int maxi = 0;
    int n = nums.size();

    // created a leftMax array
    vector<int> leftMax(n,0);
    leftMax[n-1] = nums[n-1];
    for (int i = n-2 ; i >= 0; i--)
    {
        leftMax[i] = max(nums[i], leftMax[i+1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<leftMax[i]<<" ";
    }
    
    cout<<endl;

    // two pointer approach
    int j = 0,i = 0;
    while (j < n & i<n)
    {
        if (nums[i] <= leftMax[j])
        {
            maxi = max(maxi, j - i);
            j++;
        }
        else
        {
            i++;
        }
        
    }
    return maxi;
}

int main()
{
    // vector<int> nums = {6, 0, 8, 2, 1, 5};
    vector<int>nums = {9,8,1,0,1,9,4,0,4,1};
    int ans = maxWidth(nums);
    cout << ans << endl;
    return 0;
}