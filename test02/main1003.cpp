#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<vector<int>>> dp(3, vector<vector<int>>(n+1, vector<int>(4, 0)));

    for (int i = 0; i <= 3; ++i) {
        dp[0][1][i] = i;
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j <= 3; ++j) {
            for (int k = 1; k <= 3; ++k) {
                dp[i][j][k] = dp[i-1][j][k-1] + dp[i-1][j][k];
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= 3; ++i) {
        ans += dp[2][n][i];
    }

    cout << ans << endl;

    return 0;
}
