#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int check(vector<int>v, int midF, int maxF)
{

    // if (find(v.begin(), v.end(), midF) != v.end())
    for (int i = 0; i < maxF; i++)
    {
        
    }
    

    
}

int sol(vector<int>&v, int m)
{
    int mini = *min_element(v.begin(), v.end());
    int maxi = *max_element(v.begin(), v.end());
    vector<int>temp(v.begin(), v.end());
    sort(temp.begin(), temp.end());
    int minF = temp[0] - temp[1];
    int maxF = maxi-mini;
    int ans = 0;
    while (minF<=maxF)
    {
        int midF = midF+(maxF-minF)/2;
        if (check(v, midF, maxF)>=m)
        {
            ans = midF;
            maxF = midF-1;

        }
        else
        {
            minF = midF+1;
        }
        
    }
    return ans;
    

}

int main(){
    vector<int>v = {1,2,3,4,7,};
    int m = 3;
    int ans = sol(v,m);
    cout<<ans;
    return 0;
}