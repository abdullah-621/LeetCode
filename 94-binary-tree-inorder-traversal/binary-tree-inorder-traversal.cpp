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
    // void inorderTraversal(vector<int>&ans,TreeNode* root)
    // {
    //     if (root == nullptr) return;
    //     inorderTraversal(ans,root->left);
    //     ans.push_back(root->val);
    //     inorderTraversal(ans,root->right);
    // }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        

        // inorderTraversal(ans,root);

        // iterative method
        stack<TreeNode*>st;
        TreeNode *curr = root;

        while(curr != nullptr || !st.empty())
        {
            // 1. Left subtree যতদূর সম্ভব traverse করি
            while(curr != nullptr)
            {
                st.push(curr);
                curr = curr->left;
            }

            // 2. এখন যেটা top এ আছে — সেটাই leftmost node
            curr = st.top();
            st.pop();
            ans.push_back(curr->val);

            // 4. তারপর তার right subtree তে যাই
            curr = curr->right;
        }

        return ans;
    }
};