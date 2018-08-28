class Solution {
public:
    // Iterative version
    vector<int> postorder(Node* root) {
        std::vector<int> ret{};
        std::stack<Node*> stk{};
        stk.push(root);
        while (!stk.empty()) {
            Node* cur = stk.top();
            stk.pop();
            if (cur != nullptr) {
                ret.push_back(cur->val);
                for (auto child : cur->children) {
                    stk.push(child);
                }
            }
        }
        std::reverse(ret.begin(), ret.end());
        return ret;
    }
};
