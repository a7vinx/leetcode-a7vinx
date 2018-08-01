class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        std::array<std::string, 26> morse_arr = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
            ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",
            ".--","-..-","-.--","--.."};
        std::unordered_set<std::string> trans_set;
        for (const auto& word : words) {
            std::string word_morse;
            for (auto c : word)
                word_morse += morse_arr[c - 97];
            trans_set.insert(word_morse);
        }
        return trans_set.size();
    }
};
