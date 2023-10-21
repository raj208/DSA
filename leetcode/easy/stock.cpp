#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;  // least for far
        cout<<lsf<<endl;
        int op = 0; //overall profit
        int pist = 0; //profit if sold today
        // 715362
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
                cout<<lsf<<endl;
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
    }



int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int Maxprofit = maxProfit(prices);
    cout<<"Maximum profit is:"<<Maxprofit<<endl;;
    return 0;
}


/*

***********DIFFERENT METHOD****************

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0;

        int maxProfit = 0;
        int minPrice = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                int currentProfit = prices[i] - minPrice;
                if (currentProfit > maxProfit) {
                    maxProfit = currentProfit;
                }
            }
        }

        return maxProfit;
    }
};

*/