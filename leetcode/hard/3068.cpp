#include<iostream>
#include<vector>
#include<algorithm>
#include<bitset>
using namespace std;

int xorOpr(int a, int b)
{
    int result = a^b;
    return result;
}

int sol(vector<vector<int>>&edges, int k, vector<int>nums)
{
    int maxi = 0;
    int tempSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        tempSum+=nums[i];
    }
    
    for(vector<int>v : edges)
    {
        int i = v[0];
        int j = v[1];
        int temp_i = xorOpr(nums[i],k);
        int temp_j = xorOpr(nums[j],k);
        // vector<int>dublicte = nums;
        int dub1 = nums[i];
        int dub2 = nums[j];
        nums[i] = temp_i;
        nums[j] = temp_j;
        int sum = 0;
        for (int k = 0; k < nums.size(); k++)
        {
            sum+=nums[k];
        }
        maxi = max(maxi,sum);
        nums[i]=dub1;
        nums[j]=dub2;
    }
    return max(tempSum,maxi);
}

int main(){
    vector<vector<int>> edges = {{0,1},{0,2}};
    vector<int>nums = {1,2,1};
    int k = 3;
    int ans = sol(edges,k,nums);
    cout<<ans;
    return 0;
}