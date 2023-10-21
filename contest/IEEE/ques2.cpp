// Mr Goli is not a very good person. He discriminates.
// When you give Mr Goli an Array, he will discriminate between those arrays as well !
// According to him, an array, A containing N Integers is Undesirable if it contains a
//  number that is equal to the sum of all the previous numbers of the array (Numbers of lower indices).
// For Example: [1, 3, 4, 12] is Undesirable as 4 = 1+3
// Since Mr Goli is a helpful senior, you want to be in his good books. So you don't want 
// to show him any Undesirable Array. Given an array to you, can you tell us whether you will show it to him or not?
// Print "NO" if the array is Desirable and "YES" if otherwise. Without the quotes.

#include<iostream>
#include<vector>
using namespace std;

void check(vector<int>&arr)
{
    // cout<<"Printing vector"<<endl;
    int size = arr.size();
    int flag=0;
    int sum = arr[0]+arr[1];
    for (int i = 0; i < arr.size(); i++)
    {
        if (sum != arr[i+2])
        {
            sum+= arr[i+2];
            flag ++;
        }
        if (sum != arr[i+2] && flag ==size)
        {
            cout<<"NO";
        }
        
        else
        {
            cout<<"YES";
        }
        
    }
    
    
    
}

int main(){
    int size;
    cin>>size;
    
    vector<int>arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    // 4 2 3 9 12
    check(arr);
    return 0;
}