//return the difference of highest and lower number in the array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int size;
    cin>>size;

    vector<int>arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    cout<<arr[size-1]-arr[0];    
    return 0;
}