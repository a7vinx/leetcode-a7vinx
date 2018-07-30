class Solution {
public:
    int numJewelsInStones(string J, string S) {
        std::vector<int> vec(80);
        int ret = 0;
        for (auto c : S)
            ++vec[c - 65];
        for (auto c : J)
            ret += vec[c - 65];
        return ret;
    }
};
