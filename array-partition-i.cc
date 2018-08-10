class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ret = 0;
        std::array<int, 20001> harr{};
        for (auto n : nums)
            ++harr[n + 10000];
        bool flag = true;
        for (int i = 0; i < 20001;) {
            if (harr[i] != 0) {
                if (flag) {
                    ret += (i - 10000);
                    flag = false;
                } else {
                    flag = true;
                }
                --harr[i];
            } else {
                ++i;
            }
        }
        return ret;
    }
};
