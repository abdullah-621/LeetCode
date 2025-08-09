/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void collecteRightNode(TreeNode* root, int level, vector<int>& result) {
        if (!root)
            return;

        if (level == result.size())
            result.push_back(root->val);

        collecteRightNode(root->right, level + 1, result);
        collecteRightNode(root->left, level + 1, result);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root)
            return result;
        collecteRightNode(root, 0, result);
        return result;
    }
};
// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root)
//     {
//         vector<int>result;
//         if(!root) return result;

//         queue<TreeNode*>q;
//         q.push(root);

//         while(!q.empty())
//         {
//             int n = q.size();
//             TreeNode *curr = nullptr;

//             while(n--)
//             {
//                 curr = q.front();
//                 q.pop();

//                 if(curr->left) q.push(curr->left);
//                 if(curr->right) q.push(curr->right);
//             }

//             result.push_back(curr->val);
//         }

//         return result;

//     }
// };