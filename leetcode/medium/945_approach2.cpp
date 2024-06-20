#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>nums = {1,2,2};
    int n = nums.size();
    int maxi = *max_element(nums.begin(), nums.end());
    int size = n+maxi;
    vector<int>fq(size, 0);
    for (int i = 0; i <n ; i++)
    {
        fq[nums[i]]++;
    }
    int count = 0;
    for (int i = 1; i < fq.size(); i++)
    {
        if (fq[i]!=0)
        {
            if (fq[i]>1)
            {
                int temp  = fq[i]-1;
                fq[i]-=temp;
                count+=temp;
                fq[i+1]+=temp;
            }   
        }   
    }
    cout<<count<<endl;
    
    return 0;
}