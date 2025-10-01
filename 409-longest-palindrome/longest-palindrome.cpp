class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>up;

        for(char ch : s)
        {
            up[ch]++;
        }

        int result = 0;
        bool hasodd = false;

        for(auto it : up)
        {
            if(it.second % 2 != 0)
            {
                result += (it.second - 1);
                hasodd = true;
            }
            else{
                result += it.second;
            }
        }

        if(hasodd) result += 1; // if one odd freq has exist

        return result;
    }
};