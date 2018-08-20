class Solution {
public:
    int findComplement(int num) {
        int mask = 0;
        int val = num;
        while (val != 0) {
            val >>= 1;
            mask <<= 1;
            mask |= 1;
        }
        return num ^ mask;
    }

    /*
    int findComplement(int num) {
        int mask = ~0;
        while (mask & num)
            mask <<= 1;
        return ~ mask ^ num;
    }
    */
};
