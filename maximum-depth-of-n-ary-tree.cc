class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr)
            return 0;
        int ret = 1;
        for (auto child : root->children) {
            ret = std::max(ret, 1 + maxDepth(child));
        }
        return ret;
    }
};
