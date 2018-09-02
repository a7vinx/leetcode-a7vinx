class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* cur = root;
        while (cur != nullptr) {
            if (val > cur->val)
                cur = cur->right;
            else if (val < cur->val)
                cur = cur->left;
            else
                return cur;
        }
        return nullptr;
    }
};
