class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff_count = 0;
        std::string x_bin_str{std::bitset<32>{x}.to_string()};
        std::string y_bin_str{std::bitset<32>{y}.to_string()};
        for (int i = 0; i < 32; ++i) {
            if (x_bin_str[i] != y_bin_str[i])
                ++diff_count;
        }
        return diff_count;
    }

    /*
    int hammingDistance(int x, int y) {
        int diff_count = 0;
        int mask = 1;
        for (int i = 0; i < 32; ++i) {
            if ((x & mask) ^ (y & mask))
                ++diff_count;
            mask <<= 1;
        }
        return diff_count;
    }

    // Brian Kernighan's bit counting algorithm
    int hammingDistance(int x, int y) {
        int diff_count = 0;
        int n = x ^ y;
        while (n) {
            ++diff_count;
            n &= n - 1;
        }
        return diff_count;
    }
    */
};
