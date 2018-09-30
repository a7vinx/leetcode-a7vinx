class Solution {
public:
    // Recursive version
    void DoTraversal(TreeNode* root, std::vector<int>& ret) {
        if (root == nullptr)
            return;
        DoTraversal(root->left, ret);
        ret.push_back(root->val);
        DoTraversal(root->right, ret);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> ret;
        DoTraversal(root, ret);
        return ret;
    }

    /*
    // Iterative version
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == nullptr)
            return {};
        std::vector<int> ret{};
        std::stack<TreeNode*> stk{};
        TreeNode* cur = root;
        while (true) {
            while (cur->left != nullptr) {
                stk.push(cur);
                cur = cur->left;
            }
            ret.push_back(cur->val);
            while (cur->right == nullptr) {
                if (stk.empty())
                    return ret;
                cur = stk.top();
                stk.pop();
                ret.push_back(cur->val);
            }
            cur = cur->right;
        }
        return {};
    }

    // Morris Traversal
    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> ret{};
        TreeNode* cur = root;
        while (cur != nullptr) {
            if (cur->left != nullptr) {
                TreeNode* pre = cur->left;
                while (pre->right != nullptr && pre->right != cur)
                    pre = pre->right;
                if (pre->right == nullptr) {
                    pre->right = cur;
                    cur = cur->left;
                } else {
                    pre->right = nullptr;
                    ret.push_back(cur->val);
                    cur = cur->right;
                }
            } else {
                ret.push_back(cur->val);
                cur = cur->right;
            }
        }
        return ret;
    }
    */
};
