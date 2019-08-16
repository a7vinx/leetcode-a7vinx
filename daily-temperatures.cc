class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        std::stack<int> stk{};
        std::vector<int> ret(T.size(), 0);
        for (int i = 0; i < T.size(); ++i) {
            while (!stk.empty() && T[stk.top()] < T[i]) {
                int idx = stk.top();
                stk.pop();
                ret[idx] = i - idx;
            }
            stk.push(i);
        }
        return ret;
    }
};
