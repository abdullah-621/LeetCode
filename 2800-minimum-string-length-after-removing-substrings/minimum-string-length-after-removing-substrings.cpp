class Solution {
public:
    int minLength(string s) {
        string str1 = "AB";
        string str2 = "CD";

        int pos1 = s.find(str1);
        int pos2 = s.find(str2);

        while(pos1 != string::npos || pos2 != string::npos){
            if(pos1 != string::npos){
                s.erase(pos1, 2);
            } else if(pos2 != string::npos){
                s.erase(pos2, 2);
            }

            // প্রতিবার string পরিবর্তন হওয়ার পর নতুন করে শুরু থেকে খুঁজে নিতে হবে
            pos1 = s.find(str1);
            pos2 = s.find(str2);
        }

        return s.size();
    }
};
