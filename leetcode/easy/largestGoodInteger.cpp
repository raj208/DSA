#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int checkFreq(string num,int reqElement)
{
    int count = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (reqElement == num[i])
        {
            count++;
        }
        
    }
    return count;
    
}

string largestGoodInteger(string num)
{
    vector<string>str;
    vector<int>v;
    int count =0;
    for (int i = 0; i < num.size()-1; i++)
    {
        if (num[i]==num[i+1])
        {
            count++;
            if (count>=3)
            {
                count=0;
                v.push_back(num[i]);
            }
            
        }
    }
    sort(v.begin(), v.end());
    int reqEement = v.size()-1;
    string myStr = to_string(reqEement);
    int freq = checkFreq(num,reqEement);
    for (int i = 0; i < freq; i++)
    {
        str.push_back(myStr);
    }
    return str;
    
}

int main(){
    string num = "6777133339";
    vector<string>ans;
    ans = largestGoodInteger(num);
    cout<<ans;
    return 0;
}