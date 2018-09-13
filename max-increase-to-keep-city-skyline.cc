class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int len = grid.size();
        int ret = 0;
        std::vector<int> left(len, 0);
        std::vector<int> top(len, 0);
        for (int i = 0; i < len; ++i) {
            int cur_max = 0;
            for (int j = 0; j < len; ++j) {
                if (grid[i][j] > cur_max)
                    cur_max = grid[i][j];
            }
            left[i] = cur_max;
        }
        for (int i = 0; i < len; ++i) {
            int cur_max = 0;
            for (int j = 0; j < len; ++j) {
                if (grid[j][i] > cur_max)
                    cur_max = grid[j][i];
            }
            top[i] = cur_max;
        }
        for (int i = 0; i < len; ++i)
            for (int j = 0; j < len; ++j)
                ret += std::min(left[i], top[j]) - grid[i][j];
        return ret;
    }

    /*
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int len = grid.size();
        int ret = 0;
        std::vector<int> left(len, 0);
        std::vector<int> top(len, 0);
        for (int i = 0; i < len; ++i) {
            for (int j = 0; j < len; ++j) {
                if (grid[i][j] > left[i])
                    left[i] = grid[i][j];
                if (grid[i][j] > top[j])
                    top[j] = grid[i][j];
            }
        }
        for (int i = 0; i < len; ++i)
            for (int j = 0; j < len; ++j)
                ret += std::min(left[i], top[j]) - grid[i][j];
        return ret;
    }
    */
};
