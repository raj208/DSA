#include<iostream>
#include<vector>
using namespace std;


void plusOne(vector<int>&arr)
{
    int n = arr.size();
    for (int i = n-1; i >= 0 ; i--)
    {
        if (i==n-1)
        {
            arr[i]++;
        }
        if (arr[i]==10)
        {
            arr[i] = 0;
            if (i!=0)  //checing for first digit
            {
                arr[i-1]++;
            }
            else  //used  only in 1 digit numbers
            {
                arr.push_back(0);
                arr[i]=1;
            }
            
            
        }
        
    }
    cout<<"Printing the answer "<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    vector<int>arr(size);
    cout<<"Enter the value of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    plusOne(arr);

    int arr[size];
    
    return 0;
}