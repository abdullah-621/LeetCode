class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int ans = 0;

        for(int i = 0; i < operations.size(); i++){
            string ch = operations[i];
            if(ch == "--X" || ch == "X--") ans--;
            else ans++;
        }

        return ans;
    }
};