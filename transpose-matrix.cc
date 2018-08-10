class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        std::vector<std::vector<int>> ret;
        for (int i = 0; i < A[0].size(); ++i) {
            ret.emplace_back();
            for (int j = 0; j < A.size(); ++j)
                ret.back().push_back(A[j][i]);
        }
        return ret;
    }

    /*
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        std::vector<std::vector<int>> ret(A[0].size(),
                                          std::vector<int>(A.size(), 0));
        for (int i = 0; i < A[0].size(); ++i) {
            for (int j = 0; j < A.size(); ++j)
                ret[i][j] = A[j][i];
        }
        return ret;
    }
    */
};
