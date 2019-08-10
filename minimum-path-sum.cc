class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int dp[n][m] = {0};
        dp[0][0] = grid[0][0];
        for (int i = 1; i < m; ++i)
            dp[0][i] = dp[0][i - 1] + grid[0][i];
        for (int j = 1; j < n; ++j)
            dp[j][0] = dp[j - 1][0] + grid[j][0];
        for (int j = 1; j < n; ++j) {
            for (int i = 1; i < m; ++i) {
                dp[j][i] = std::min(dp[j - 1][i], dp[j][i - 1]) + grid[j][i];
            }
        }
        return dp[n - 1][m - 1];
    }
};
