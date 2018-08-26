class Solution {
public:
    // Calculate the shortest distance based on the locations of all char c.
    vector<int> shortestToChar(string S, char c) {
        std::vector<int> ret(S.size(), 0);
        int i = 0;
        int j = 0;
        // Deal with characters before the first char c.
        while (i < S.size() && S[i] != c)
            ++i;
        while (j <= i) {
            ret[j] = i - j;
            ++j;
        }
        // Deal with characters after the first char c.
        for (++i; i < S.size(); ++i) {
            if (S[i] != c)
                continue;
            int k = 0;
            while ((j + k) < (i + j + 1) / 2) {
                ret[j + k] = k + 1;
                ++k;
            }
            while ((j + k) < i) {
                ret[j + k] = i - j - k;
                ++k;
            }
            j = i + 1;
        }
        // Deal with characters after the last char c.
        if (S[i - 1] != c && j != i) {
            int k = 0;
            while (j < i)
                ret[j++] = ++k;
        }
        return ret;
    }

    /*
    // Two passes
    vector<int> shortestToChar(string S, char c) {
        int size = S.size();
        int pos = 2 * size;
        std::vector<int> ret(size, size);
        for (int i = 0; i >= 0; ret[size - 1] == size ? ++i : --i) {
            if (S[i] == c)
                pos = i;
            ret[i] = std::min(ret[i], std::abs(i - pos));
        }
        return ret;
    }
    */
};
