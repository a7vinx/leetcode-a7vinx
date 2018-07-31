class Solution {
public:
    string toLowerCase(string str) {
        std::string ret;
        ret.reserve(str.size());
        for (auto c : str)
            ret.push_back((c > 64 && c < 91) ? c + 32 : c);
        return ret;
    }
};
