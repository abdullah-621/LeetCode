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
void leaf_path(TreeNode* root, string s,vector<string>& ans){

    if(root == nullptr){
        return;
    } 

    int len = s.size();

    if(!s.empty()){
        s += "->";
    }
    s += to_string(root->val);

    if(root->left == nullptr && root->right == nullptr){
        ans.push_back(s);
        // s.erase(len);
        return;
    }
    leaf_path(root->left, s, ans);
    leaf_path(root->right, s, ans);
    s.erase(len);
    
}
    vector<string> binaryTreePaths(TreeNode* root) {
        // string s;
        vector<string>ans;
        leaf_path(root,"",ans);

        return ans;
    }
};