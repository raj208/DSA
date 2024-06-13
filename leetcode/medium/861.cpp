#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int sol(vector<vector<int>>&grid)
{
    int row = grid.size();
    int col = grid[0].size();
    //checking if row flip is possible
    for (int i = 0; i < row; i++)
    {
        if (grid[i][0] != 1)
        {
            //flipping row
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 0)
                {
                    grid[i][j] = 1;
                }
                else
                {
                    grid[i][j] = 0;
                }
                
            }
            
        }
        
    }

    for (int i = 1; i < col; i++)
    {
        int zeros = 0;
        int ones = 0;
        for (int j = 0; j < row; j++)
        {
            if (grid[j][i] == 0)
            {
                zeros++;
            }
            else
            {
                ones++;
            }
            
        }
        if (zeros>ones)
        {
            //flip
            for (int k = 0; k < row ; k++)
            {
                if (grid[k][i] == 0)
                {
                    grid[k][i] = 1;
                }
                else
                {
                    grid[k][i] =0;
                }
                
            }
            
        }
        
        
    }
    // int sum = 0;
    // for (int i = 0; i < row; i++)
    // {
    //     int temp = 0;
    //     for (int j = 0; j < col; j++)
    //     {
    //         temp+=grid[i][j];
    //     }
    //     sum+=temp;
        
    // }
    // return sum;
    // int temp =0;
    int sum = 0;
    for (int i = 0; i <row; i++)
    {
        int temp=0;
        for (int j = 0; j < col; j++)
        {
            
            if (grid[i][j] == 1)
            {
                temp+=pow(2,col-j-1);
                // cout<<temp<<" ";
            }
            
        }
        // cout<<temp<<" ";
        sum+=temp;
        
    }
    return sum;
    
    
    
    
}

int main(){
    vector<vector<int>>grid = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    int ans = sol(grid);
    cout<<ans<<endl;
    // int row= grid.size();
    // int col = grid[0].size();
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<grid[i][j]<<" ";

    //     }
    //     cout<<endl;
        
    // }
    
    return 0;
}