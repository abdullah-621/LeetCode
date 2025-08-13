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
    vector<int>value;
    int index = 0;
    void inorderValue(TreeNode *root, vector<int>&value)
    {
        if(!root) return;
        inorderValue(root->left,value);
        value.push_back(root->val);
        inorderValue(root->right,value);
    }
    void inorder_replace(TreeNode *root)
    {
        if(!root) return;
        inorder_replace(root->left);
        root->val = value[index++];
        inorder_replace(root->right);
    }
    void recoverTree(TreeNode* root) 
    {
        inorderValue(root,value);
        sort(value.begin(),value.end());
        inorder_replace(root);
    }
};