class Solution {
public:
    /*
    // Backtracking solution
    void Backtrack(std::vector<std::string>& ret, std::string cur,
                   int left_l, int open_r) {
        if (left_l == 0 && open_r == 0) {
            ret.push_back(cur);
            return;
        }
        if (left_l > 0)
            Backtrack(ret, cur + "(", left_l - 1, open_r + 1);
        if (open_r > 0)
            Backtrack(ret, cur + ")", left_l, open_r - 1);
    }

    vector<string> generateParenthesis(int n) {
        std::vector<std::string> ret{};
        Backtrack(ret, "", n, 0);
        return ret;
    }

    // Dp solution
    vector<string> generateParenthesis(int n) {
        std::vector<std::vector<std::string>> mem(n + 1);
        mem[0].push_back("");
        for (int i = 1; i < n + 1; ++i) {
            for (int j = 0; j < i; ++j) {
                for (const auto& s1 : mem[j]) {
                    for (const auto& s2 : mem[i - j - 1]) {
                        mem[i].push_back(s1 + "(" + s2 + ")");
                    }
                }
            }
        }
        return mem[n];
    }
    */
};
