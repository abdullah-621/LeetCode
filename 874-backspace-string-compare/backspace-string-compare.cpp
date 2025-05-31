class Solution {
public:
    string StringSizeAfterOperation(string &str){
       string ans = "";

       for(char ch : str){
        if(ch != '#') ans += ch;

        else
        {
            if(!ans.empty()) ans.pop_back();
        } 
       }

       return ans;
    }
    bool backspaceCompare(string s, string t) {
        
        return StringSizeAfterOperation(s) == StringSizeAfterOperation(t);
    }
};