/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> ret{};
        std::stack<TreeNode*> wait_stack{};
        if (root != nullptr)
            wait_stack.push(root);
        while (!wait_stack.empty()) {
            TreeNode* cur = wait_stack.top();
            wait_stack.pop();
            ret.push_back(cur->val);
            if (cur->right != nullptr)
                wait_stack.push(cur->right);
            if (cur->left != nullptr)
                wait_stack.push(cur->left);
        }
        return ret;
    }
};
