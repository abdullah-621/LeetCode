class Solution {
public:
    string removeDuplicates(string s) {
        
        // stack<char>st;

        // for(char ch : s){
        //     if(!st.empty() && ch == st.top()) st.pop();

        //     else st.push(ch);
        // }
        // s.clear();

        // while(!st.empty()){
        //     s.push_back(st.top());
        //     st.pop();
        // }
        // reverse(s.begin(), s.end());
        // return s;

        string ans;
        for(char ch : s){
            if(!ans.empty() && ch == ans.back()) ans.pop_back();

            else ans.push_back(ch);
        }

        return ans;

    }
};