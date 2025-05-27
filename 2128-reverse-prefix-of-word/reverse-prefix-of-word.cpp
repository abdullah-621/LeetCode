class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();

        for(int i = 0 ; i < n; i++){
            if(word[i] == ch){
                int j = 0;
                int k = i;

                while(j < k){
                    swap(word[j],word[k]);
                    j++;
                    k--;
                }
                return word;
            }
        }

        return word;
    }
};