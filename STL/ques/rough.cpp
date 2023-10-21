#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }

    int min = arr[0];
    int max = arr[size-1];
    
    cout<<max-min;
    
    
    
    return 0;
}