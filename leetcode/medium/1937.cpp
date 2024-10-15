#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sol(vector<vector<int>>&points)
{
    int row = points.size();
    int col = points[0].size();
    vector<vector<int>>temp(row,vector<int>(col,0));

    for (int i = 0; i < col; i++)
    {
        temp[0][i] = points[0][i];
    }
    

    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int maxi = 0;
            for (int k = 0; k < col; k++)
            {
                int num = (points[i][j]+temp[i-1][k])-abs(j-k);
                maxi=max(num,maxi);
            }
            temp[i][j] = maxi;
        }
        
    }
    int maxi=0;
    for (int i = 0; i < col ; i++)
    {
        maxi = max(temp[row-1][i], maxi);
    }
    return maxi;
    
}

int main(){
    // vector<vector<int>>points = {{1,2,3},{1,5,1},{3,1,1}};
    vector<vector<int>>points = {{0,3,0,4,2},{5,4,2,4,1},{5,0,0,5,1},{2,0,1,0,3}};
    // vector<vector<int>>points = {{1,5},{2,3},{4,2}};
    int ans = sol(points);
    cout<<ans<<endl;
    return 0;
}