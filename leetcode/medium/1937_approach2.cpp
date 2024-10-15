#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sol(vector<vector<int>>&points)
{
    int row = points.size();
    int col = points[0].size();
    vector<int>prev(col,0);
    vector<int>maxi(col,0);
    vector<int>left(col,0);
    vector<int>right(col,0);

    //adding first row into prev vector
    for (int i = 0; i < col; i++)
    {
        prev[i] = points[0][i];
    }
    for (int i = 1; i < col; i++)
    {
        //for left
        for (int j = 0; j < col; j++)
        {
            if (j==0)
            {
                left[j] = max(0,prev[j]);
            }
            else
            {
                left[j] = max(prev[j],left[j-1]-1);  
            }
        }
        //for right
        for (int j = col-1; j >= 0; j--)
        {
            if (j==col)
            {
                right[j] = max(0,prev[j]);
            }
            else{
                right[j]= max(prev[j],right[j+1]-1);
            }

        }
        // max for left and right
        for (int j = 0; j < col; j++)
        {
            int max_left_right = max(left[j],right[j]);
            maxi[j]=max_left_right;
        }

        //updating prev
        for (int j = 0; j < col; j++)
        {
            prev[j] = maxi[j]+points[i][j];
        }
        
    }
    int ans = *max_element(begin(prev), end(prev));
    return ans;
}

int main(){
    // vector<vector<int>>points = {{1,2,3},{1,5,1},{3,1,1}};
    vector<vector<int>>points = {{0,3,0,4,2},{5,4,2,4,1},{5,0,0,5,1},{2,0,1,0,3}};

    // vector<vector<int>>points = {{1,5},{2,3},{4,2}};
    int ans = sol(points);
    cout<<ans<<endl;
    return 0;
}