#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>>directions = {{-1,0},{1,0},{0,-1},{0,1}};
int DFS(vector<vector<int>>&grid, int i, int j, int row, int col)
{
    if (i>=row || j>=col || grid[i][j] == 0 || i<0 || j<0)
    {
        return 0;
    }

    int tempGold = grid[i][j];
    grid[i][j] = 0;

    int maxGold = 0;
    for(vector<int>dir : directions)
    {
        int new_i = i+dir[0];
        int new_j = j+dir[1];
        maxGold = max(maxGold, DFS(grid, new_i, new_j, row, col));
    }
    grid[i][j] = tempGold;
    return maxGold+tempGold;
    
}

int sol(vector<vector<int>>&grid)
{
    int row = grid.size();
    int col = grid[0].size();
    int maxGold = 0;
    // vector<int>visited{row*col, -1};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j]!=0)
            {
                maxGold = max(maxGold, DFS(grid, i ,j,row,col));
            }
            
        }
        
    }
    return maxGold;

    
}

int main(){
    cout<<"testing1"<<endl;
    vector<vector<int>>grid = {{0,6,0},{5,8,7},{0,9,0}};
    int ans = sol(grid);
    cout<<"testing2"<<endl;
    cout<<ans<<endl;
    return 0;
}