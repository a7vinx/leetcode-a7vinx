class Solution {
public:
    string reverseString(string s) {
        int i = 0;
        int j = s.size() - 1;
        char c;
        while (i < j) {
            c = s[i];
            s[i] = s[j];
            s[j] = c;
            ++i;
            --j;
        }
        return s;
    }
};
