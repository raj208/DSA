#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of vecotr"<<endl;
    cin>>size;

    vector<int> nums;
    cout<<"Enter the value of vectors"<<endl;
    for (int i = 0; i < size; i++)
    {
        nums.insert(i);
    }

    cout<<"Tesitng";
    for (int i = size-1; i >= 0; i--)
    {
        if (nums[i] == i) //always take it true
        {
            nums[i]++;
        }
        if (nums[i] == 10)
        {
            nums[i]=0;
            if (i != 0)
            {
                nums[i-1]++;
            }
            else
            {
                nums.push_back(0);
                nums[i] = 1;
            }
            
        }
        
        
    }
    
    cout<<"Printing array with one added"<<endl;
    // for (int i:nums)
    // {
    //     cout<<i<<" ";
    // }
    for (int i = 0; i < size; i++)
    {
        cout<<nums[i];
    }
    
    
    return 0;
}