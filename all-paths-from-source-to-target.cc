class Solution {
public:
    void Dfs(int i,
             std::unordered_map<int, std::vector<std::deque<int>>>& records,
             const std::vector<std::vector<int>>& graph) {
        if (records.count(i) != 0)
            return;
        for (auto p : graph[i]) {
            if (p == graph.size() - 1)
                records[i].push_back({i, p});
            else {
                Dfs(p, records, graph);
                for (const auto& path : records[p]) {
                    records[i].push_back(path);
                    records[i].back().push_front(i);
                }
            }
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        // Memoization
        std::unordered_map<int, std::vector<std::deque<int>>> records;
        Dfs(0, records, graph);
        std::vector<std::vector<int>> ret{};
        for (const auto& path : records[0])
            ret.emplace_back(path.begin(), path.end());
        return ret;
    }
};
