class Solution {
public:
    /*
    int matrixScore(vector<vector<int>>& A) {
        int m = A.size();
        int n = A[0].size();
        int ret = m * (1 << (n - 1));
        for (int i = 1; i < n; ++i) {
            int cur_col = 0;
            for (int j = 0; j < m; ++j)
                cur_col += A[j][i] == A[j][0];
            ret += std::max(cur_col, m - cur_col) * (1 << (n - i - 1));
        }
        return ret;
    }
    */
};
