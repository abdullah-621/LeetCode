class Solution {
public:
    string StringSizeAfterOperation(string &str){
       string ans = "";

       for(char ch : str){
        if(ch != '#') ans += ch;

        else{

            if(ans.size() > 0) ans.erase(ans.end() - 1);

        } 
       }

       return ans;
    }
    bool backspaceCompare(string s, string t) {
        string s1 = StringSizeAfterOperation(s);
        string t1 = StringSizeAfterOperation(t);

        // for(int i = 0; i < s.size(); i++){
        //     if(s1[i] != t1[i]) return false;
        // }

        return s1 == t1;
    }
};