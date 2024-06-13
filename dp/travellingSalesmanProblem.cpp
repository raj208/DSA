#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const int MAX_N = 15; // Maximum number of cities
const int INF = INT_MAX; // Infinity

int n; // Number of cities
int dist[MAX_N][MAX_N]; // Distance matrix
int dp[MAX_N][1 << MAX_N]; // Dynamic programming table  gives--> 2^MAX_N  number of possible subsets int the city

// Function to solve TSP using dynamic programming
int tsp(int pos, int mask) {
    if (mask == (1 << n) - 1) // All cities visited
        return dist[pos][0]; // Return to starting city
    
    if (dp[pos][mask] != -1)
        return dp[pos][mask]; // Memoization
    
    int ans = INF;
    for (int i = 0; i < n; ++i) {
        if (!(mask & (1 << i))) { // If city i is not visited
            int newDist = dist[pos][i] + tsp(i, mask | (1 << i));
            ans = min(ans, newDist);
        }
    }
    return dp[pos][mask] = ans; // Memoize the result
}

int main() {
    cout << "Enter the number of cities: ";
    cin >> n;
    
    cout << "Enter the distance matrix (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> dist[i][j];
    
    // Initialize dp table with -1
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < (1 << n); ++j)
            dp[i][j] = -1;
    
    int minDist = tsp(0, 1); // Start from city 0 (1 << 0)
    
    cout << "Minimum distance for TSP: " << minDist << endl;
    
    return 0;
}
