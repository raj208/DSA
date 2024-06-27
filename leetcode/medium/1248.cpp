#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sol(vector<int> &nums, int k)
{
    
    int n = nums.size();
    //prefixSum
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]%2 !=0)
        {
            sum++;
        }
    }
    int ans = 0;
    if (sum == n)
    {
        while (sum--)
        {
            ans+=sum;
        }
        return ans;
    }
    
    int firstIndex = 0;
    int lastIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 != 0)
        {
            firstIndex = i;
            break;
        }
        
    }
    int i = 0;
    int window = k;
    int count = 0;
    while (i <= n - window)
    {
        int j;
        for (j = i; j < i+window; j++)
        {
            if (nums[j] % 2 != 0)
            {
                count++;
            }
            if (count == k)
            {
                lastIndex = j;
                break;
            }
        }
        window++;
        count=0;
    }
    cout<<"firstIndex "<<firstIndex<<endl;
    cout<<"lastIndex "<<lastIndex<<endl;

    return 0;
}

int main()
{
    // vector<int> nums = {1,1,2,1,1};
    // vector<int> nums = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    vector<int> nums = {1,1,1,1};
    int k = 2;
    int ans = sol(nums, k);
    cout << ans;
    return 0;
}