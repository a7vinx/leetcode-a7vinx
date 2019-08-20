class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int max = 0;
        std::vector<int> htable(26, 0);
        for (auto t : tasks) {
            ++htable[t - 'A'];
            max = std::max(htable[t - 'A'], max);
        }
        int ret = (max - 1) * (n + 1);
        for (auto count : htable) {
            if (count == max)
                ++ret;
        }
        ret = std::max(ret, static_cast<int>(tasks.size()));
        return ret;
    }
};
