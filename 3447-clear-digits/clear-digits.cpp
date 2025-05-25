class Solution {
public:
    string clearDigits(string s) {
        // stack<char>st;

        // for(char ch : s){
        //     if(!isdigit(ch)){
        //         st.push(ch);
        //     }
        //     else{
        //         if(!st.empty())
        //         st.pop();
        //     }
        // }

        // string ans = "";
        // while(!st.empty()){
        //     ans += st.top();
        //     st.pop();
        // }
        // reverse(ans.begin(), ans.end());

        // return ans;

        string stk;

        for(char ch : s){
            if(isdigit(ch)){

                if(!stk.empty())stk.pop_back();
             }
                else{
                    stk.push_back(ch);
                }
            }
        return stk;
    }
};