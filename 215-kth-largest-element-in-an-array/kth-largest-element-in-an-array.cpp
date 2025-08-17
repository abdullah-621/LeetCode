class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        // int index = nums.size() - k;
        priority_queue<int>pq(nums.begin(), nums.end());

        k = k - 1;
        while(k--)
        {
            pq.pop();
        }

        return pq.top();
    }
};