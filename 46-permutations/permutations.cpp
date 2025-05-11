class Solution {
public:
    void backtrack(vector<int>& nums,vector<bool>& visited,vector<vector<int>>& ans,vector<int>&temp){
        
        if(temp.size() == visited.size()){
            ans.push_back(temp);
            return;
        }

        for(int i = 0; i < nums.size(); i++){

            if(visited[i] == false){

            visited[i] = true;
            temp.push_back(nums[i]);
            backtrack(nums,visited,ans,temp);
            visited[i] = 0;
            temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>visited(nums.size(),false);
        vector<vector<int>> ans;
        vector<int>temp;

        backtrack(nums,visited,ans,temp);
        
        return ans;

        return ans;
    }
};