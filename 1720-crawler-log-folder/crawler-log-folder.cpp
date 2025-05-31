class Solution {
public:
    int minOperations(vector<string>& logs) {
        // stack<string>st;

        // for(int i = 0; i < logs.size(); i++){
        //     if(logs[i] == "../"){
        //         if(!st.empty()) st.pop();
        //     } 

        //     else if(logs[i] == "./") continue;

        //     else st.push(logs[i]);
        // }

        // return st.size();

        int ans = 0;

        for(auto log : logs){
            if(log == "../"){
                if(ans > 0) ans--;
            }
            else if(log != "./") ans++;
        }

        return ans;
    }
};