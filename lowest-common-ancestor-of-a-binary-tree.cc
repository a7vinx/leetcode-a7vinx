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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || (!p && !q))
            return nullptr;
        if (root == p || root == q)
            return root;
        TreeNode* lret = lowestCommonAncestor(root->left, p, q);
        TreeNode* rret = lowestCommonAncestor(root->right, p, q);
        if (lret && rret) {
            return root;
        } else {
            return lret ? lret : rret;
        }
    }
};
