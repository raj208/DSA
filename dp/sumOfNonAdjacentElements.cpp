#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sol(vector<int>&v,int i)
{
    if (i>=v.size())
    {
        return 0;
    }
    int incl = v[i]+sol(v,i+2);
    int excl = 0+sol(v,i+1);
    return max(incl,excl);
    
    
}

int main(){
    vector<int>v = {9,9,8,2};
    int ans = sol(v,0);
    cout<<ans;
    cout<<"this is answer"<<endl;
    return 0;
}

