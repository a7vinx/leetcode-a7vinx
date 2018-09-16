class Solution {
public:
    /*
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        std::vector<TreeNode*> vec{};
        for (auto i : nums) {
            TreeNode* tp = new TreeNode{i};
            while (!vec.empty() && vec.back()->val < i) {
                tp->left = vec.back();
                vec.pop_back();
            }
            if (!vec.empty())
                vec.back()->right = tp;
            vec.push_back(tp);
        }
        return vec.empty() ? nullptr : vec.front();
    }
    */
};
