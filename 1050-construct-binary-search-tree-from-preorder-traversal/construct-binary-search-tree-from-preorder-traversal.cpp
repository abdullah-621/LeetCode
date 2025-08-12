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
    TreeNode *constractBST(TreeNode *root,int key)
    {
        if(root == nullptr)
        {
            return new TreeNode(key);
        }

        if(key < root->val) root->left = constractBST(root->left,key);
        if(key > root->val) root->right = constractBST(root->right,key);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *root = nullptr;
        for(int i = 0; i < preorder.size(); i++)
        {
            root = constractBST(root,preorder[i]);
        }
        return root;
    }
};