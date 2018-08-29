class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        for (int i = 0; i < columns; ++i) {
            for (int j = 1; j < std::min(columns - i, rows); ++j) {
                if (matrix[j][i + j] != matrix[j - 1][i + j - 1])
                    return false;
            }
        }
        for (int i = 0; i < rows; ++i) {
            for (int j = 1; j < std::min(rows - i, columns); ++j) {
                if (matrix[i + j][j] != matrix[i + j - 1][j - 1])
                    return false;
            }
        }
        return true;
    }

    /*
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        for (int i = 1; i < columns; ++i) {
            for (int j = 1; j < rows; ++j) {
                if (matrix[j][i] != matrix[j - 1][i - 1])
                    return false;
            }
        }
        return true;
    }
    */
};
