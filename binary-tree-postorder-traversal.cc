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
    vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> ret{};
        std::stack<TreeNode*> wait_stk{};
        TreeNode* cur = root;
        TreeNode* last = nullptr;
        while (cur || !wait_stk.empty()) {
            if (cur) {
                wait_stk.push(cur);
                cur = cur->left;
            } else {
                TreeNode* tmp = wait_stk.top();
                if (tmp->right && last != tmp->right) {
                    cur = tmp->right;
                } else {
                    ret.push_back(tmp->val);
                    last = tmp;
                    wait_stk.pop();
                }
            }
        }
        return ret;
    }
};
