class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // unorderde_map<int,int>freq;

        // for(int i = 0; i < nums.size();i++) freq[i]++;

        // int count = 0;
        // for(int j = 0; j < nums.size(); j++)
        // {
        //     count += freq.find()
        // }

        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] < nums[i]) count ++;
            }
            ans.push_back(count);
        }

        return ans;
    }
};