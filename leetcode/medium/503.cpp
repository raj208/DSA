#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sol(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int flag = 0;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] < nums[j])
            {
                ans.push_back(nums[j]);
                flag++;
                break;
            }
        }

        

        if (flag == 0)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (nums[i] < nums[j])
                {
                    ans.push_back(nums[j]);
                }
                else
                {
                    ans.push_back(-1);
                }
                break;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2,1};
    // vector<int> nums = {1, 2, 3, 4, 3};
    vector<int> ans = sol(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}