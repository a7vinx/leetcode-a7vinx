class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        std::unordered_multiset<std::string> word_set{};
        std::stringstream ss{A + " " + B};
        std::string word;
        while (std::getline(ss, word, ' '))
            word_set.insert(word);
        std::vector<std::string> ret{};
        for (auto w : word_set) {
            if (word_set.count(w) == 1)
                ret.push_back(w);
        }
        return ret;
    }
};
