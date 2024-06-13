#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool check(vector<vector<int>> &manhattendist, int sf)
{
    // cout<<"bool function"<<endl; 
    queue<pair<int, int>> q;
    int n = manhattendist.size();
    vector<vector<int>> visited(n, vector<int>(n, false));
    q.push({0, 0});
    visited[0][0] = true;

    while (!q.empty())
    {
        int curr_i = q.front().first;
        int curr_j = q.front().second;
        q.pop();

        if (curr_i == n-1 && curr_j == n-1)
        {
            return true;
        }
        

        for (vector<int> dirs : directions)
        {
            int new_i = curr_i + dirs[0];
            int new_j = curr_j + dirs[1];
            if (new_i >= 0 && new_i < n && new_j >= 0 && new_j < n && visited[new_i][new_j] != true)
            {
                if (manhattendist[new_i][new_j] < sf)
                {
                    // cout<<sf<<" ";
                    continue;
                }

                q.push({new_i, new_j});
                // int temp = q.front;

                cout<<manhattendist[new_i][new_j]<<" || their SF is->"<<sf<<endl;
                visited[new_i][new_j] = true;
            }
        }
        
        
    }
    return false;
}

int sol(vector<vector<int>> &grid)
{
    // cout<<"sol function"<<endl;
    int n = grid.size();
    vector<vector<int>> manhattenDist(n, vector<int>(n, -1));
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }

    int level = 0;
    while (!q.empty())
    {
        // cout<<"sol 'first while loop'"<<endl;
        int size = q.size();
        while (size--)
        {
            // cout<<"second while loop"<<endl;
            int curr_i = q.front().first;
            int curr_j = q.front().second;
            q.pop();
            manhattenDist[curr_i][curr_j] = level;
            for (vector<int> dirs : directions)
            {
                // cout<<"sol for loop"<<endl;
                int new_x = curr_i + dirs[0];
                int new_y = curr_j + dirs[1];

                if (new_x < 0 || new_x >= n || new_y < 0 || new_y >= n || visited[new_x][new_y] != false )
                {
                    continue;
                }
                // if (new_x < 0 || new_x > n || new_y < 0 || new_x > n || manhattenDist[new_x][new_y] != -1)
                // {
                //     continue;
                // }
                q.push({new_x, new_y});
                visited[new_x][new_y] = true;
                // cout<<"sol for loop enddddddd"<<endl;

            }
        }
        level++;
    }
    // cout<<"starting of binary search"<<endl;
    int l = 0;
    int r = 400;
    int result = 0;

    while (l <= r)
    {
        int sf = l + (r - l) / 2;
        // cout<<sf<<" ";
        if (check(manhattenDist, sf))
        {
            result = sf;
            l = sf + 1;
        }
        else
        {
            r = sf - 1;
        }
        
    }
    return result;
}

int main()
{
    // cout<<"test1"<<endl;
    vector<vector<int>> grid = {{0, 0, 0, 1}, {0, 0, 0, 0}, {0, 0, 0, 0}, {1, 0, 0, 0}};
    int ans = sol(grid);
    cout<<ans<<endl;
    // cout<<"test"<<endl;
    return 0;
}