#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// approach 1
vector<int> sol1(vector<int> &nums)
{
    int zero = 0;
    int one = 0;
    int two = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            zero++;
        }
        else if (nums[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    vector<int> ans;
    for (int i = 0; i < zero; i++)
    {
        ans.push_back(0);
    }

    for (int i = 0; i < one; i++)
    {
        ans.push_back(1);
    }
    for (int i = 0; i < two; i++)
    {
        ans.push_back(2);
    }
    return ans;
}

// approach 2
vector<int> sol2(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    int k = nums.size() - 1;
    // vector<int>ans;
    while (j <= k)
    {
        if (nums[j] == 1)
        {
            j++;
        }
        else if (nums[j] == 0)
        {
            swap(nums[i], nums[j]);
            j++;
            i++;
        }
        else
        {
            swap(nums[j], nums[k]);
            k--;
        }
    }

    return nums;
}

int main()
{
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    vector<int> nums2 = {2, 0, 2, 1, 1, 0};
    vector<int> ans1 = sol1(nums1);
    vector<int> ans2 = sol2(nums2);
    for (int i : ans1)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i : ans2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}