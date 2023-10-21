#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row;
    cout<<"Enter the row"<<endl;
    cin>>row;

    int col;
    cout<<"Enter the column"<<endl;
    cin>>col;

    cout<<"Enter the value of array"<<endl;
    vector<vector<int>>arr;
    // int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<"Printing array"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j];
        }
        
    }
    
    
    return 0;
}