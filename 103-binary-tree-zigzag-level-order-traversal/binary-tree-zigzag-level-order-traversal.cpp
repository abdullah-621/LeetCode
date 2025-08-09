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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root)
            return ans;

        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright = true;

        while (!q.empty()) {
            int n = q.size();
            vector<int> temp(n);

            for (int i = 0; i < n; i++)
            {
                TreeNode* start = q.front();
                q.pop();

                int index = lefttoright ? i : (n - 1 - i);

                temp[index] = start->val;

                if (start->left) q.push(start->left);
                if (start->right) q.push(start->right);
            }

            ans.push_back(temp);
            lefttoright = !lefttoright;  // change the direction
            
        }
        return ans;
    }
};