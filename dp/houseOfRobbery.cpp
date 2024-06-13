#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solLeft(vector<int>&v,int i)
{
    if (i>=v.size()-1)
    {
        return 0;
    }
    
    int incl = v[i]+solLeft(v,i+2);
    int excl = 0+solLeft(v,i+1);
    return max(incl,excl);
    
}

int solRight(vector<int>&v,int i)
{
    if (i>=v.size())
    {
        return 0;
    }
    
    int incl = v[i]+solRight(v,i+2);
    int excl = 0+solRight(v,i+1);
    return max(incl,excl);
    
}

int main(){
    vector<int>v = {1,3,2,7};
    int left = solLeft(v,0);
    int right = solRight(v,1);
    int ans = max(left,right);
    cout<<ans;
    return 0;
}

