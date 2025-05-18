// class Solution {
// public:
// bool findX(string s, char x){

//     for(char ch : s){
//         if(ch == x){
//             return true;
//         }
//     }
//     return false;
// }
//     vector<int> findWordsContaining(vector<string>& words, char x) {
        
//         vector<int>ans;

//         for(int i = 0; i < words.size(); i++ ){
//             string s = words[i];
//            bool flag = findX(s,x);

//            if(flag) ans.push_back(i);
//         }

//         return ans;
//     }
// };

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> idx;
        for (int i = 0; i < words.size(); i++) {
            for (char ch : words[i]) {
                if (ch == x) {
                    idx.push_back(i);
                    break;
                }
            }
        }
        return idx;
    }
};