class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>freq;

        for(char ch : s){
            freq[ch]++;
        }
        int count = freq.begin()->second;

        for(auto it : freq){
            if(count != it.second){
                return false;
            }
        }

        return true;
    }
};