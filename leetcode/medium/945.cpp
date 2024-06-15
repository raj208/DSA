#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<int> &nums, int temp, int s)
{
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == temp)
        {
            return false;
        }
    }
    return true;
}
// vector<int> minIncrementForUnique(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
//     for (int i = 1; i < nums.size(); i++)
//     {
//         if (nums[i] == nums[i - 1])
//         {
//             int temp = nums[i];
//             while (!check(nums, temp))
//             {
//                 temp++;
//             }
//             nums[i] = temp;
//         }
//     }
//     return nums;
// }

int main()
{
    vector<int>nums = {3,2,1,2,1,7};
    sort(nums.begin(), nums.end());
    int count=0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i-1])
        {
            
            int diff = abs(nums[i-1] - nums[i]);
            nums[i] +=diff+1;
            count+=diff+1;
        }
        
        else if (nums[i] == nums[i - 1])
        {
            nums[i] +=1;
            count++;
        }
    }
    for(int i: nums)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}