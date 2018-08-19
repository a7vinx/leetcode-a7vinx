class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int cur_line = 0;
        int line_count = 1;
        for (auto c : S) {
            cur_line += widths[c - 'a'];
            if (cur_line > 100) {
                cur_line = widths[c - 'a'];
                ++line_count;
            }
        }
        return {line_count, cur_line};
    }
};
