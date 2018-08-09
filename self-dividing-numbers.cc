class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        std::vector<int> ret;
        for (int i = left; i <= right; ++i) {
            bool flag = true;
            for (auto c : std::to_string(i)) {
                if (c == '0' || i % (c - '0') != 0) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ret.push_back(i);
        }
        return ret;
    }

    /*
    vector<int> selfDividingNumbers(int left, int right) {
        std::vector<int> ret;
        for (int i = left; i <= right; ++i) {
            int n = i;
            for (; n > 0; n /= 10) {
                if (n % 10 == 0 || i % (n % 10) != 0)
                    break;
            }
            if (n == 0)
                ret.push_back(i);
        }
        return ret;
    }
    */
};
