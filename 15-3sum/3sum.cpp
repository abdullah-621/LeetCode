class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        
        vector<vector<int>> ans;

        int n = nums.size();

        if(n < 3) return ans; // if total element less then 3

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 2; i++){

            if(nums[i] > 0) break;  // After sorting first element of the nums is greater then 0 then on solution 

            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = n - 1;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    ans.push_back({nums[i], nums[j], nums[k]});

                    while(j < k && nums[j] == nums[j + 1]) j++;
                    while(j < k && nums[k] == nums[k - 1]) k--;
                    j++;
                    k--;
                }
                else if(sum < 0) j++;
                else k--;
            }
        }

        return ans;
    }
};