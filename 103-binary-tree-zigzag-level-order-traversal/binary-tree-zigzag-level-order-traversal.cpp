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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        if(!root) return ans;

        queue<TreeNode*>q;
        q.push(root);
        int count = 0;

        while(!q.empty())
        {
            vector<int>temp;
            int n = q.size();
            while(n--)
            {
                TreeNode *start = q.front();
                q.pop();
                temp.push_back(start->val);

                if(start->left) q.push(start->left);
                if(start->right) q.push(start->right);

            }
            if(count % 2 == 1) reverse(temp.begin(),temp.end());
            ans.push_back(temp);
            count++;
        }
        return ans;

    }
};