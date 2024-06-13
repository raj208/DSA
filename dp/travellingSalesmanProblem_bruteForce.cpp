#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const int MAX_N = 15; // Maximum number of cities

int dist[MAX_N][MAX_N];
int n;
// int VISITED_ALL = (1<<n) -1;

int tsp(int mask, int pos)
{
    if (mask == ((1<<n)-1))
    {
        return dist[pos][0];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) //2
    {
        if (!(mask & (1<<i))) //when 0 then it will go in this condition || takes the LSB as condition
        {
            int newAns = dist[pos][i] + tsp(mask | (1<<i),i);
            ans = min(ans,newAns);
        }
        
    }
    return ans;

}

int main() {
    cout << "Enter the number of cities: ";
    cin >> n;
    
    cout << "Enter the distance matrix (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> dist[i][j];
    
    int minDist = tsp(1,0); // Start from city 0 (1 << 0)
    
    cout << "Minimum distance for TSP: " << minDist << endl;
    
    return 0;
}
