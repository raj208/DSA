#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string sol(string s)
{
    int l = 0;
    int h = s.size()-1;
    while (l<h)
    {
        swap(s[l],s[h]);
        l++;
        h--;
    }
    return s;
}

int main(){
    string s = "hello";
    string ans = sol(s);
    cout<<ans;
    return 0;
}