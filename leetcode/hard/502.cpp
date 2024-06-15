#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sol(int k, int w, vector<int>&profit, vector<int>&capital)
{
    while (k>0)
    {
        for (int i = 0; i < profit.size(); i++)
        {
            if (w==capital[i])
            {
                int maxi = 0;
                for (int j = i; j < profit.size(); j++)
                {
                    if (w==capital[i])
                    {
                        
                    }
                    
                    
                    
                }
                w+=max
                
            }
            
        }
        
    }
    
}

int main(){
    int k=2;
    int w = 0;
    vector<int>profit = {1,2,3};
    vector<int>capital = {0,1,1};
    int ans = sol(k,w,profit,capital);
    cout<<ans<<endl;
    return 0;
}