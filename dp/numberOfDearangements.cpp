#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int temp = 0;
int sol(int n)
{
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }

        int temp = (n-1)*(sol(n-2)+sol(n-1));
    return temp;
    
}

int main(){
    // vector<int>v = {0,1,2,3,4};
    int n = 5;
    int ans = sol(n);
    cout<<ans<<endl;
    return 0;
}