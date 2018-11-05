class Solution {
public:
    /*
    // Backtracking solution
    void Backtrack(std::vector<std::vector<int>>& ret, std::vector<int>& nums,
                   std::vector<int> cur_set, int start) {
        ret.emplace_back(cur_set);
        for (int i = start; i < nums.size(); ++i) {
            cur_set.push_back(nums[i]);
            Backtrack(ret, nums, cur_set, i + 1);
            cur_set.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<std::vector<int>> ret{};
        Backtrack(ret, nums, {}, 0);
        return ret;
    }

    // Iterative solution
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<std::vector<int>> ret{};
        ret.emplace_back();
        for (auto i : nums) {
            int size = ret.size();
            for (int j = 0; j < size; ++j) {
                ret.emplace_back(ret[j]);
                ret.back().push_back(i);
            }
        }
        return ret;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = std::pow(2, nums.size());
        std::vector<std::vector<int>> ret(n);
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < n; ++j) {
                if ((j >> i) & 1)
                    ret[j].push_back(nums[i]);
            }
        }
        return ret;
    }
    */
};
