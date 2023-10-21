#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


vector<int> reverse(vector<int>arr)
{
    int s  = 0, e = arr.size()-1;
    while (s<=e) {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }    
    return arr;
}

void print(vector<int> arr){
    for (int i = 0; i<arr.size(); i++) {
        cout<<arr[i]<< " ";
    }cout<<endl;
}

int main() {
    int size;
    cin>>size;
    vector<int>arr;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    vector<int> ans = reverse(arr);
    print(ans);
    return 0;
}