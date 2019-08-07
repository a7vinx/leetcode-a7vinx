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
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> ret{};
        std::vector<int> cur_level{};
        TreeNode* separator = new TreeNode{0};
        std::queue<TreeNode*> wait_queue{};
        if (root) {
            wait_queue.push(root);
            wait_queue.push(separator);
            ret.emplace_back();
        }
        while (!wait_queue.empty()) {
            TreeNode* cur = wait_queue.front();
            wait_queue.pop();
            if (cur == separator) {
                if (wait_queue.empty())
                    break;
                wait_queue.push(separator);
                ret.emplace_back();
            } else {
                ret.back().push_back(cur->val);
                if (cur->left)
                    wait_queue.push(cur->left);
                if (cur->right)
                    wait_queue.push(cur->right);
            }
        }
        delete separator;
        return ret;
    }
};
