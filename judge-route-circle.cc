class Solution {
public:
    bool judgeCircle(string moves) {
        int ud_balance = 0;
        int lr_balance = 0;
        for (auto c : moves) {
            switch (c) {
                case 'U': ++ud_balance; break;
                case 'D': --ud_balance; break;
                case 'L': ++lr_balance; break;
                case 'R': --lr_balance; break;
            }
        }
        return !(ud_balance | lr_balance);
    }
};
