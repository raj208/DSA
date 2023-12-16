#include<iostream>
using namespace std;
#include<vector>

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         vector<int> alp(26);
//         for (auto& x : s) alp[x - 'a']++;
//         for (int i = 0; i < s.length(); i++) {
//             if (alp[s[i] - 'a'] == 1) return i;
//         }
//         return -1;
//     }
// };

int def(string s)
{
    vector<int>alp(26);
    for(auto& x: s) 
    {
        alp[x-'a']++;
        
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout << alp[s[i] -'a'] <<" ";
        if (alp[s[i] -'a'] == 1)
        {
            return i;
        }
        
    }
    
}

int main(){
    // string s;
    int ans = def("rajendra");
    cout<<ans<<endl;

    return 0;
}