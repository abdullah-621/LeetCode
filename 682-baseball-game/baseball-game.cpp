class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ans;

        for(int i = 0 ;i < operations.size(); i++){
           string ch = operations[i];

           if(ch == "D"){
            if(ans.size() >= 1){
            int n = 2 * ans.back();
            ans.push_back(n);
            }
           }
           else if (ch == "C"){
            if(ans.size() >= 1)
            ans.pop_back();
           }
           else if(ch == "+"){
            if(ans.size() >= 2){
                int n = ans[ans.size() - 1] + ans[ans.size() - 2];
            ans.push_back(n);
            }

           }
           else{
            int n = stoi(ch);
            ans.push_back(n);
           }
        }

        int sum = 0;
        for(int i : ans){
            sum += i;
        }

        return sum;
    }
};