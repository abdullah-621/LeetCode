class compare
{
    public:
    bool operator()(string a, string b)
    {
        return a + b > b + a;
    }
};

class Solution {
public:
    // static bool compare(string a , string b)
    // {
    //     return a + b > b + a;
    // }

    string largestNumber(vector<int>& nums) {

        vector<string>st;

        // convert to string
        for(int i : nums)
        {
            st.push_back(to_string(i));
        }
        
        // sort the st with custom sorting
        // sort(st.begin(), st.end(), compare);
        sort(st.begin(), st.end(), compare());

        string ans = "";

        for(string ch : st)
        {
            ans.append(ch);
        }

        if(ans[0] == '0') return "0";


        return ans;
    }
};