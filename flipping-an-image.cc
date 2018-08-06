class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        std::vector<vector<int>> ret;
        for (int i = 0; i < A.size(); ++i) {
            ret.emplace_back();
            for (int j = A.size() - 1; j >= 0; --j) {
                ret[i].push_back(A[i][j] ^ 1);
            }
        }
        return ret;
    }
};
