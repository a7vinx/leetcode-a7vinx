class Solution {
public:
    /*
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> ret(nums.size(), 0);
        ret[0] = 1;
        for (int i = 1; i < nums.size(); ++i)
            ret[i] = ret[i - 1] * nums[i - 1];
        int right = 1;
        for (int i = nums.size() - 1; i >= 0; --i) {
            ret[i] *= right;
            right *= nums[i];
        }
        return ret;
    }
    */
};
