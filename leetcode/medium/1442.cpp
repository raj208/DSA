#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sol(vector<int>&arr)
{
    int n = arr.size();
    vector<int>prefixXor(begin(arr),end(arr));

    prefixXor.insert(prefixXor.begin(),0);
    // int temp = arr[0]^0;
    // prefixXor.push_back(0);
    // prefixXor.push_back(temp);
    // prefixXor[0]  = arr[0];
    // for (int i = 1; i < n; i++)
    // {
        
    //         temp = temp ^arr[i];
    //         prefixXor.push_back(temp);
        
    // }
    for (int i = 1; i < prefixXor.size(); i++)
    {
        prefixXor[i] ^=prefixXor[i-1];
    }
    cout<<"printing prexifXor array"<<endl;
    for (int i = 0; i < prefixXor.size(); i++)
    {
        cout<<prefixXor[i]<<" ";
    }
    
    cout<<endl;

    int count = 0;
    for (int i = 0; i < prefixXor.size(); i++)
    {
        for (int j = prefixXor.size()-1; j>i+1; j--)
        {
            if (prefixXor[i]==prefixXor[j])
            {
                int sum = j-i-1;
                count+=sum;
            }  
        }
        
    }
    return count;   
}

int main(){
    // vector<int>arr = {2,3,1,6,7};
    vector<int>arr = {1,1,1,1,1};
    int ans = sol(arr);
    cout<<ans<<endl;
    // sol(arr);
    return 0;
}