class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map<char,int>freq;

        // for(char i : s){
        //     freq[i]++;
        // }


        // for(int i = 0; i < s.size(); i++){
        //     if(freq[s[i]] == 1) {
        //         return i;
        //     }
        // }
        // return -1;

        int frequency[26] = {0};

        for(char c : s){
            frequency[c - 'a']++;
        }

        for(int i = 0; i < s.size(); i++){
            if(frequency[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};