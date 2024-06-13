//FINDING THE MAXIMUM FREQUENCY
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    int size = 6;
    int arr[size] = {1,2,3,1,2,1};
    unordered_map<int,int>m;
    for (int i = 0; i <size ; i++)
    {
        m[arr[i]]++;
        
    }

    int ans =-1;
    int maxi = INT16_MIN; //minimum value stored
    // cout<<"maxi "<<maxi;
    for(auto i: m)
    {
        if(i.second > maxi)
        {
            maxi = i.second;
            ans = i.first;
        }
    }
    cout<<ans<<endl;
    

    return 0;
}