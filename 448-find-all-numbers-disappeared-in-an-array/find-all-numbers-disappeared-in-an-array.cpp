// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {

//         // unordered_map<int,int>freq;

//         unordered_set<int> freq(nums.begin(), nums.end());

//         // for(int a : nums){
//         //     freq[a]++;
//         // }

//         vector<int>ans;

//         int n = nums.size();

//         for(int u = 1; u <= n; u++){
//             if(freq.find(u) == freq.end()){  // find return iterator , So if find() not find value so its return last + 1 iterator of the map.
//                 ans.push_back(u);
//             }
//         }

//         return ans;
//     }
// };
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Mark visited numbers by negating the value at the corresponding index
        for (int i = 0; i < n; ++i) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        // Step 2: Collect indices that have positive values => those indices+1 are missing
        vector<int> ans;
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};
