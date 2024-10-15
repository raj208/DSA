#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int> &candidates, int target, vector<int> curr, vector<vector<int>> &result, int idx)
{
    if (target < 0)
        return;
    if (target == 0)
    {-
        result.push_back(curr);
        return;
    }

    for (int i = idx; i < candidates.size(); i++)
    {
        cout<<i<<" this is value of i"<<endl;
        cout<<idx<<" this is value of idx"<<endl;
        if (i > idx && candidates[i] == candidates[i - 1])
        {
            continue; // ignore duplicate elements
        }
        curr.push_back(candidates[i]);
        solve(candidates, t arget - candidates[i], curr, result, i + 1);
        curr.pop_back();
    }
}
int main()
{
    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> result;
    vector<int> curr;
    sort(candidates.begin(), candidates.end()); 
    solve(candidates, target, curr, result, 0);
    for(const auto& row : result)
    {
        for(const auto& ele: row)
        {
            cout<<ele <<" ";
        }
        cout<<endl;
    }
}