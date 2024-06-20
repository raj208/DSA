#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sol(vector<int>&difficult, vector<int>&profit, vector<int>&worker)
{
    vector<pair<int, int>>v(profit.size());
    for (int i = 0; i < profit.size(); i++)
    {
        v[i] = {difficult[i], profit[i]};
    }
    int currProfit = 0;
    int maxProfit = 0;
    sort(v.begin(), v.end());
    int i=0;
    int j=0;
    while (i<worker.size())
    {
        while (worker[i] >= v[j].first && j<profit.size())
        {
            // cout<<j<<" ";
            maxProfit = max(maxProfit, v[j].second);
            // cout<<maxProfit<<" "<<i<<" "<<j<<" ";
            j++;
            
        }
        cout<<maxProfit<<" ";
        currProfit+=maxProfit;
        // currProfit+=v[j-1].second;
        
        i++;
        
    }
    return currProfit;
    
    
}

int main(){
    vector<int>difficult = {2,4,6,8,10};
    vector<int>profit = {10,20,30,40,50};
    vector<int> worker = {4,5,6,7};
    int ans = sol(difficult, profit, worker);
    cout<<endl;
    cout<<ans;
    return 0;
}   