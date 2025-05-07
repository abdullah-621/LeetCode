class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        vector<int>duplicate;

        for(int i = 0 ; i < 2*n; i++){
            duplicate.push_back(nums[i % n]);
        }

        vector<int>ans(n,-1);
        stack<int>st;

        for(int i = 0; i < 2 * n; i++){
            while(!st.empty() && duplicate[i] > duplicate[st.top()]){
                int idx = st.top();
                st.pop();
                ans[idx] = duplicate[i];
            }

            st.push(i % n);  // because of ans er size n deoya ace but just i dile index er value n er bahire jete pare
        }

        return ans;
    }
};