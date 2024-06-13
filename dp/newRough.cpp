#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int sol(int n, vector<int>&seg)
{
    if (n == 0)
    {
        return 0; // Changed to 0
    }
    int maxi = INT_MIN; // Changed to INT_MIN
    for (int i = 0; i < seg.size(); i++)
    {
        if (n - seg[i] >= 0) { // Added condition to ensure non-negative length
            int ans = sol(n - seg[i], seg);
            maxi = max(maxi, ans + 1); // Added +1 to count the current segment
        }
    }
    return maxi;
}

int main(){
    int n = 7;
    vector<int> seg = {5,2,2};
    int ans = sol(n, seg);
    cout << ans;
    return 0;
}
