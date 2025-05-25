class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;

        for(char ch : s){
            if(!isdigit(ch)){
                st.push(ch);
            }
            else{
                if(!st.empty())
                st.pop();
            }
        }

        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        int i = 0;
        int j = ans.size() - 1;

        while(i < j){
            char temp = ans[i];
            ans[i] = ans[j];
            ans[j] = temp;
            i++;
            j--;
            }

        return ans;
    }
};