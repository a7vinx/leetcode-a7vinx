class Solution {
public:
    bool do_prune(TreeNode* root) {
        if (root == nullptr)
            return false;
        int lret = do_prune(root->left);
        int rret = do_prune(root->right);
        if (lret == false)
            root->left = nullptr;
        if (rret == false)
            root->right = nullptr;
        if (root->val == 0 && lret == false && rret == false)
            return false;
        return true;
    }

    TreeNode* pruneTree(TreeNode* root) {
        do_prune(root);
        return root;
    }

    /*
    TreeNode* pruneTree(TreeNode* root) {
        if (root == nullptr)
            return nullptr;
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        if (root->val == 0 && root->left == nullptr && root->right == nullptr)
            return nullptr;
        return root;
    }
    */
};
