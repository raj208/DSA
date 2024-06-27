#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sol(vector<int>&customers, vector<int>&grumpy, int m)
{
        int maxCus = 0;
        int n = customers.size();
        for (int i = 0; i < n; i++)
        {
            if (grumpy[i] == 0)
            {
                maxCus += customers[i];
            }
        }
        int i=0;
        int curr = 0;
        while (i<=n-m)
        {
            int temp=0;
            for (int j = i; j < m+i; j++)
            {
                if (grumpy[j] == 1)
                {
                    temp+= customers[j];
                }         
            }
            curr = max(curr,temp);   
            i++;
        }
        // cout<<curr<<endl;
        maxCus+=curr;
        return maxCus;  
    }

int main(){
    vector<int>customers = {10,1,7};
    vector<int>grumpy = {0,0,0};
    int m = 2;
    int ans = sol(customers, grumpy, m);
    cout<<ans<<endl;
    return 0;
}