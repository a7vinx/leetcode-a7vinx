class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int ar = std::stoi(a.substr(0, a.find('+')));
        int ai = std::stoi(a.substr(a.find('+') + 1));
        int br = std::stoi(b.substr(0, b.find('+')));
        int bi = std::stoi(b.substr(b.find('+') + 1));
        return std::to_string(ar * br - ai * bi) + "+" +
               std::to_string(ar * bi + br * ai) + "i";
    }

    /*
    string complexNumberMultiply(string a, string b) {
        int ar, ai, br, bi;
        char c;
        std::stringstream ass{a};
        std::stringstream bss{b};
        std::stringstream ret;
        ass >> ar >> c >> ai;
        bss >> br >> c >> bi;
        ret << ar * br - ai * bi << "+" << ar * bi + br * ai << "i";
        return ret.str();
    }
    */
};
