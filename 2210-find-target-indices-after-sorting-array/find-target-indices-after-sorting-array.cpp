// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         sort(nums.begin(), nums.end());
//         vector<int>ans;

//         int i = 0;
//         int j = nums.size() - 1;

//         while(i < j){
//             if(nums[i] == target) ans.push_back(i);
//             if(nums[j] == target) ans.push_back(j);
//             i++;
//             j--;
//         }
//         return ans;

//     }
// };

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int>ans;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target) ans.push_back(i);
        }

        return ans;

    }
};