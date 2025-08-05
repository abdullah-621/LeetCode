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
void preorderTraversal(vector<int>&ans,TreeNode* root,stack<TreeNode*>st)
    {
         if (root == nullptr) return;
        // ans.push_back(root->val);
        // preorderTraversal(ans,root->left);
        // preorderTraversal(ans,root->right);
        st.push(root);
        while(!st.empty())
        {
            TreeNode *top = st.top();
            ans.push_back(top->val);
            st.pop();
            if(top->right)
                st.push(top->right);
            if(top->left)
                st.push(top->left);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>st;
        preorderTraversal(ans,root,st);
        return ans;
    }
};