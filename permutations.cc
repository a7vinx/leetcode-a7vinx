class Solution {
public:
    void do_permute(std::vector<int>& nums, int beg, int end,
                    std::vector<std::vector<int>>& ret) {
        if (beg >= end) {
            ret.push_back(nums);
            return;
        }
        for (int i = beg; i <= end; ++i) {
            std::swap(nums[beg], nums[i]);
            do_permute(nums, beg + 1, end, ret);
            std::swap(nums[beg], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        std::vector<std::vector<int>> ret{};
        do_permute(nums, 0, nums.size() - 1, ret);
        return ret;
    }
};
