#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>check;
        int flag = 0;
        
        for(int i=0; i<prices.size();i++)
        {
            for(int j=i; j<prices.size(); j++)
            {
                int difference = -1;
                if(prices[i]<prices[j+1])
                {
                    difference = prices[j+1]-prices[i];
                    check.push_back(difference);
                    flag++;
                    
                }
                else
                {
                    continue;
                }
            }
        }
        if(flag>0)
        {
            sort(check.begin(), check.end());
            int max;
            for(int i=0; i<check.size(); i++)
            {
                max=check[check.size()-1];
            }
            return max;
        }
        else
        {
            return 0;
        }
        return {};
    }
};
// 7,1,5,3,6,4
int main(){
    vector<int>profit;
    profit.push_back(7);
    profit.push_back(1);
    profit.push_back(5);
    profit.push_back(3);
    profit.push_back(6);
    profit.push_back(4);
    Solution maxProfit(vector<int> prices);
    return 0;
}