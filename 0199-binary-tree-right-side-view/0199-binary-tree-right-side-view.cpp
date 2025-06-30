/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            TreeNode* right = nullptr;
            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front(); q.pop();
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
                right = curr;
            }
            result.push_back(right->val);
        }

        return result;
    }
};