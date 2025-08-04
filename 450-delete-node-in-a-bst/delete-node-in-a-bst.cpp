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
    // TreeNode* delNode(TreeNode* root, int key)
    // {
        
    // }
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
       

        if(root == nullptr) return nullptr;
        if(key < root->val) 
        {
            root->left = deleteNode(root->left, key);
        }
        else if(key > root->val)
        {
            root->right = deleteNode(root->right, key);
        } 
        else 
        {
             // if no child
            if(!root->left && !root->right)
            {
                delete root;
                return nullptr;
            }
            // if one child
            else if(!root->left || !root->right)
            {
                TreeNode *child = root->left ? root->left : root->right;
                delete root;
                return child;
            }
            // if two child
            else
            {
                TreeNode *temp = root->left;
                while(temp != nullptr && temp->right != nullptr)
                {
                    temp = temp->right;
                }
                root->val = temp->val;
                root->left = deleteNode(root->left, temp->val);
            }
        }

        return root;
    }
};