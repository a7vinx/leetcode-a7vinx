class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> m{};
        std::list<std::pair<int, int>> l{{0, 0}};
        std::vector<int> ret{};
        for (auto i : nums)
            ++m[i];
        for (const auto& pair : m) {
            auto pos = l.begin();
            while (pos != l.end() && pair.second < pos->second)
                ++pos;
            l.insert(pos, pair);
        }
        auto iter = l.begin();
        for (int i = 0; i < k; ++i, ++iter)
            ret.push_back(iter->first);
        return ret;
    }

    /*
    vector<int> topKFrequent(const vector<int>& nums, int k) {
        std::unordered_map<int, int> m{};
        std::vector<int> ret{};
        for (auto i : nums)
            ++m[i];
        std::vector<std::pair<int, int>> heap{};
        int i = 0;
        std::greater<std::pair<int, int>> pair_greater{};
        for (const auto& pair : m) {
            if (i >= k && pair.second > heap[0].first) {
                heap.emplace_back(pair.second, pair.first);
                std::pop_heap(heap.begin(), heap.end(), pair_greater);
                heap.pop_back();
            } else if (i < k) {
                heap.emplace_back(pair.second, pair.first);
                std::push_heap(heap.begin(), heap.end(), pair_greater);
            }
            ++i;
        }
        std::sort_heap(heap.begin(), heap.end(), pair_greater);
        for (const auto& pair : heap)
            ret.push_back(pair.second);
        return ret;
    }
    */
};
