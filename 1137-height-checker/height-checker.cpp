class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>temp(heights.begin(), heights.end());
        sort(heights.begin(),heights.end());

        int ans = 0;

        for(int i = 0 ; i < temp.size(); i++)
        {
            if(heights[i] != temp[i]) ans++;
        }


        return ans;
    }
};