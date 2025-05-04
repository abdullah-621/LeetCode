class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        unordered_map<int,int>freq;

        for(int a : nums){
            freq[a]++;
        }

        vector<int>ans;

        int n = nums.size();

        for(int u = 1; u <= n; u++){
            if(freq.find(u) == freq.end()){  // find return iterator , So if find() not find value so its return last + 1 iterator of the map.
                ans.push_back(u);
            }
        }

        return ans;
    }
};