class Solution {
public:
    vector<int> countBits(int num) {
        std::vector<int> ret;
        for (int i = 0; i <= num; ++i) {
            int n = i;
            int count = 0;
            while (n != 0) {
                ++count;
                n &= n - 1;
            }
            ret.push_back(count);
        }
        return ret;
    }

    /*
    vector<int> countBits(int num) {
        std::vector<int> ret(num + 1, 0);
        for (int i = 1; i <= num; ++i)
            ret[i] = ret[i & (i - 1)] + 1;
        return ret;
    }
    */
};
