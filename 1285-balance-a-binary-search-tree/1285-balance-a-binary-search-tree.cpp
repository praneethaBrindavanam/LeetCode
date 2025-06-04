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
vector<int>trav;
void inorder(TreeNode* root)
{
    if(!root)
    return;
    inorder(root->left);
    trav.push_back(root->val);
    inorder(root->right);
    return;
}
TreeNode* helper(TreeNode* root,int left,int right)
{
    if(left>right)
    return nullptr;
    int mid=(left+right)/2;

    root=new TreeNode(trav[mid]);
    root->left=helper(root->left,left,mid-1);
    root->right=helper(root->right,mid+1,right);
    return root;
}
    TreeNode* balanceBST(TreeNode* root) {
        
        inorder(root);
        root=helper(root,0,trav.size()-1);
        return root;
    }
};