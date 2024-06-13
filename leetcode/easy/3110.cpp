#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(string s)
{
    int total = 0;
    int size = s.size();
    for (int i = 0; i < size-1; i++)
    {
        total+=abs(s[i]-s[i+1]);
    }
    return total;
}

int main(){
    string s = "zaz";
    int ans = solve(s);
    cout<<ans;
    return 0;
}