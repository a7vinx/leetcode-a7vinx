class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        std::vector<std::vector<int>> ret{};
        auto comp = [](const std::vector<int>& p1, const std::vector<int>& p2) {
            return (p1[0] > p2[0]) || (p1[0] == p2[0] && p1[1] < p2[1]);
        };
        std::sort(people.begin(), people.end(), comp);
        for (const auto& p : people) {
            ret.insert(ret.begin() + p[1], p);
        }
        return ret;
    }
};
