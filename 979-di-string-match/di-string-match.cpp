class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>perm;
        int low = 0;
        int high = s.size();

        for(char ch : s)
        {
            if(ch == 'I')
            {
                perm.push_back(low);
                low++;
            }
            else{
                perm.push_back(high);
                high--;
            }
        }

        perm.push_back(high);

        return perm;
    }
};