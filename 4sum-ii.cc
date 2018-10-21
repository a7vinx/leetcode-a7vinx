class Solution {
public:
    /*
    int fourSumCount(vector<int>& A, vector<int>& B,
                     vector<int>& C, vector<int>& D) {
        std::unordered_map<int, int> m{};
        for (auto i : A)
            for (auto j : B)
                ++m[i + j];
        int count = 0;
        for (auto i : C) {
            for (auto j : D) {
                auto ret = m.find(0 - i - j);
                if (ret != m.end())
                    count += ret->second;
            }
        }
        return count;
    }
    */
};
