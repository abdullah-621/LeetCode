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
    int getBalance(TreeNode *root)
    {
        if(root == nullptr) return 0;

        int left_height = getBalance(root->left);

        if(left_height == -1) return -1;

        int right_height = getBalance(root->right);
        
        if(right_height == -1) return -1;

        int balance = left_height - right_height;

        if (balance < -1 || balance > 1) return -1;

        return 1 + max(left_height, right_height);  // height update
    }
    bool isBalanced(TreeNode* root) 
    {
        return getBalance(root) != -1;
    }
};

// class Solution {
// public:
//     int getHeight(TreeNode *root)
//     {
//         if(root == nullptr) return 0;

//         int left_height = getHeight(root->left);
//         int right_height = getHeight(root->right);

//         return 1 + max(left_height, right_height);
//     }
//     // int getBalance(TreeNode *root)
//     // {
//     //     return getHeight(root->left) - getHeight(root->right);
//     // }
//     bool isBalanced(TreeNode* root) 
//     {
//         if(root == nullptr) return true;

//         int left_height = getHeight(root->left);
//         int right_height = getHeight(root->right);

//         int balance = left_height - right_height;

//         if (balance < -1 || balance > 1) return false;

//         return isBalanced(root->left) && isBalanced(root->right);
//     }
// };