#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>counts(26,0);
    string chars = "chars";
    for(char ch : chars)
    {
        counts[ch-'a']++;
        cout<<counts[ch - 'a']++;
    }
    return 0;
}