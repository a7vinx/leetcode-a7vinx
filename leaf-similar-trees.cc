class Solution {
public:
    void get_leaves(TreeNode* root, std::vector<int>& leaves) {
        if (root != nullptr) {
            get_leaves(root->left, leaves);
            get_leaves(root->right, leaves);
            if (root->left == nullptr && root->right == nullptr)
                leaves.push_back(root->val);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        std::vector<int> root1_leaves{};
        std::vector<int> root2_leaves{};
        get_leaves(root1, root1_leaves);
        get_leaves(root2, root2_leaves);
        if (root1_leaves.size() != root2_leaves.size())
            return false;
        auto iter1 = root1_leaves.cbegin();
        auto iter2 = root2_leaves.cbegin();
        while (iter1 != root1_leaves.cend()) {
            if (*iter1++ != *iter2++)
                return false;
        }
        return true;
    }

    /*
    int leaf_gen(std::stack<TreeNode*>& stk) {
        while (true) {
            TreeNode* cur = stk.top();
            stk.pop();
            if (cur->left != nullptr)
                stk.push(cur->left);
            if (cur->right != nullptr)
                stk.push(cur->right);
            if (cur->left == nullptr && cur->right == nullptr)
                return cur->val;
        }
    }

	bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        std::stack<TreeNode*> stk1{};
        std::stack<TreeNode*> stk2{};
        if (root1 != nullptr)
            stk1.push(root1);
        if (root2 != nullptr)
            stk2.push(root2);
        while (!stk1.empty() && !stk2.empty()) {
            if (leaf_gen(stk1) != leaf_gen(stk2))
                return false;
        }
        return stk1.empty() && stk2.empty();
    }
    */
};
