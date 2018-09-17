class Solution {
public:
    std::string standardize(const std::string& w) {
        std::unordered_map<char, int> m;
        std::string ret{w};
        for (int i = 0; i < w.size(); ++i) {
            if (m.count(w[i]) == 0) {
                auto size = m.size();
                m[w[i]] = size;
            }
            ret[i] = 'a' + m[ret[i]];
        }
        return ret;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        std::string std_pattern = standardize(pattern);
        std::vector<std::string> ret;
        for (const auto& w : words) {
            if (standardize(w) == std_pattern)
                ret.push_back(w);
        }
        return ret;
    }
};
