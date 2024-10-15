#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sol(int num)
{
    if(num == 2)
    {
        return false;
    }
    if(num == 3)
    {
        return false;
    }
    if(num%2 == 0 || num%3 == 0)
    {
        return false;
    }
    
}

int main(){
    int n = 24;
    int ans = sol(num);
    cout<<ans<endl;
    return 0;
}