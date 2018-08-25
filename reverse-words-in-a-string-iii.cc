class Solution {
public:
    string reverseWords(string s) {
        int cursor = 0;
        int size = s.size();
        while (cursor < size) {
            int i = cursor;
            while (cursor < size && s[cursor] != ' ')
                ++cursor;
            int j = cursor - 1;
            while (i < j) {
                char c = s[i];
                s[i] = s[j];
                s[j] = c;
                ++i;
                --j;
            }
            ++cursor;
        }
        return s;
    }
};
