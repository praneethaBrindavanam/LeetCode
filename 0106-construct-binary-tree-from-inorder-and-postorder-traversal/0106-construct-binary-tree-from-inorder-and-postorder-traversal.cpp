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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> inorderIndex;
        int postIndex = postorder.size() - 1;

        for (int i = 0; i < inorder.size(); ++i) {
            inorderIndex[inorder[i]] = i;
        }

        
        function<TreeNode*(int, int)> build = [&](int inStart, int inEnd) -> TreeNode* {
            if (inStart > inEnd) return nullptr;

            int rootVal = postorder[postIndex--];
            TreeNode* root = new TreeNode(rootVal);

            int index = inorderIndex[rootVal];

            
            root->right = build(index + 1, inEnd);
            root->left = build(inStart, index - 1);

            return root;
        };

        return build(0, inorder.size() - 1);
    }
};
