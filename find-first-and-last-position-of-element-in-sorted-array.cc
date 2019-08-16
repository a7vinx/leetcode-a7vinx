class Solution {
public:
    vector<int> DoBinarySearch(std::vector<int>& nums, int l, int r, int target) {
        if (l >= r) {
            if (nums[l] == target) {
                return {l, l};
            } else {
                return {};
            }
        }
        auto lret = DoBinarySearch(nums, l, (l + r) / 2, target);
        auto rret = DoBinarySearch(nums, (l + r) / 2 + 1, r, target);
        if (lret.empty() && rret.empty()) {
            return {};
        } else if (!lret.empty() && !rret.empty()) {
            return {lret[0], rret[1]};
        } else if (!lret.empty()) {
            return lret;
        } else {
            return rret;
        }
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty())
            return {-1, -1};
        auto ret = DoBinarySearch(nums, 0, nums.size() - 1, target);
        if (ret.empty()) {
            return {-1, -1};
        } else {
            return ret;
        }
    }
};
