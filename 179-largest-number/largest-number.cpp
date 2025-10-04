class Solution {
public:
    static bool comp(string a , string b)
    {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {

        vector<string>st;

        for(int i : nums)
        {
            st.push_back(to_string(i));
        }
        
        sort(st.begin(), st.end(), comp);

        string ans = "";

        for(string ch : st)
        {
            ans.append(ch);
        }

        if(ans[0] == '0') return "0";


        return ans;
    }
};