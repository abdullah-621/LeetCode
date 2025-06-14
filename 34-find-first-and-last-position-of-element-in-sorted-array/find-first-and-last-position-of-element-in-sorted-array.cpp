class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                result.push_back(i);
                break;
            }
        }
        for(int i = nums.size() - 1; i >= 0 ; i--){
            if(nums[i] == target){
                result.push_back(i);
                break;
            }
        }
        if(!result.empty()){
            return result;
        }
        else{
            result.push_back(-1);
            result.push_back(-1);
             return result;
        }
       
    }
};