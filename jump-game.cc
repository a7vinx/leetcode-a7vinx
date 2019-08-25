class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len_to_zero = 0;
        bool ok = true;
        for (int i = nums.size() - 2; i >= 0; --i) {
            if (nums[i] == 0) {
                if (ok) {
                    len_to_zero = 1;
                    ok = false;
                } else {
                    ++len_to_zero;
                }
            } else {
                if (nums[i] >= len_to_zero + 1) {
                    ok = true;
                } else {
                    ++len_to_zero;
                }
            }
        }
        return ok;
    }

	/*
    // Simple one.
    bool canJump(vector<int>& nums) {
		int i = 0;
    	for (int reach = 0; i < n && i <= reach; ++i)
    	    reach = std::max(i + A[i], reach);
    	return i == n;
    }
	*/
};
