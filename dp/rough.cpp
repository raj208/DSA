
#include <iostream>
#include <vector>
using namespace std;

int derangementCount(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;

    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; ++i) {
        dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]);
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int count = derangementCount(n);
    cout << "Number of derangements for " << n << " elements: " << count << endl;

    return 0;
}
