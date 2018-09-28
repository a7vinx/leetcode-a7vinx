class Solution {
public:
    vector<int> partitionLabels(string S) {
        std::unordered_map<char, std::pair<int, int>> ranges{};
        std::vector<int> ret{};
        for (int i = 0; i < S.size(); ++i) {
            if (ranges.count(S[i]) == 0)
                ranges[S[i]] = {i, i};
            else
                ranges[S[i]].second = i;
        }
        for (int i = 0; i < S.size();) {
            int l = i;
            int r = ranges[S[i]].second;
            while (++i <= r) {
                if (ranges[S[i]].second > r)
                    r = ranges[S[i]].second;
            }
            ret.push_back(r - l + 1);
        }
        return ret;
    }
};
