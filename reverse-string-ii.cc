class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        for (int i = 0; i < s.size(); i += 2 * k) {
            int l = i;
            int r = (i + k > s.size() ? s.size() : i + k) - 1;
            while (l < r) {
                char c = s[l];
                s[l++] = s[r];
                s[r--] = c;
            }
        }
        return s;
    }
};
