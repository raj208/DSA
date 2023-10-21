#include<iostream>
using namespace std;

int stock(int arr[],int size)
{
    int maxProfit = 0;
    int minPrice = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minPrice)
        {
            minPrice = arr[i];
        }
        else
        {
            int currentProfit = arr[i] - minPrice;
            if (currentProfit > maxProfit)
            {
                maxProfit = currentProfit;
            }
            
        }
        
    }
    return maxProfit;
    
}

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the prices of stokes"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int ans = stock(arr,size);
    cout<<"maximum profit is "<<ans<<endl;
    
    return 0;
}