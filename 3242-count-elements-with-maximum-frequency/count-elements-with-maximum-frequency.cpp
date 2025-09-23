class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int,int>freq;
        int high = -1;

        for(int i : nums)
        {
            freq[i]++;
            high = max(high, freq[i]);
        }

        int ans = 0;

        for(auto it : freq)
        {
            if(it.second == high)
            {
                ans += it.second;
            }
        }

        return ans;
    }
};