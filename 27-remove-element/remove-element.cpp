class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int i = 0, j = 0;
        int n = nums.size();

        sort(nums.begin(),nums.end());

        while(j < n){
            if(nums[j] != val){
                swap(nums[i],nums[j]);
                j++;
                i++;
                k++;
            }

           else if(nums[j] == val){
                j++;
            }
        }
        return k;
    }
};