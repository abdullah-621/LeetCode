class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>freq;

        int maxLength = 0;

        for(int i : nums){
            freq[i]++;
        }

        // for(auto it = freq.begin(); it != freq.end(); it++){
        //     int key = it->first;
        //     int value = it->second;
        //     if(freq.count(key + 1)){
        //         int length = value + freq[key + 1];
        //         maxLength = max(maxLength,length);
        //     }
        // }

        for(auto& [key,value] : freq){
            if(freq.count(key + 1)){
                int length = value + freq[key + 1];
                maxLength = max(maxLength,length);
            }
        }

        return maxLength;
    }
};