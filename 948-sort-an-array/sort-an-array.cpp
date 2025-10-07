class Solution {
public:
    void merge(vector<int>&nums, int start, int mid, int end)
    {
        vector<int>temp(end - start + 1);

        int left = start;
        int right = mid + 1;
        int index = 0;

        while(left <= mid && right <= end)
        {
            if(nums[left] <= nums[right])
            {
                temp[index++] = nums[left++];
            }
            else
            {
                temp[index++] = nums[right++];
            }
        }

        while(left <= mid)
        {
            temp[index++] = nums[left++];
        }

        while(right <= end)
        {
            temp[index++] = nums[right++];
        }

        index = 0;
        while(start <= end)
        {
            nums[start++] = temp[index++];
        }

    }
    void Divide(vector<int>&nums, int first,int last)
    {
        if(first == last) return; // base case

        int mid = first + (last - first) / 2; // find mid

        Divide(nums, first, mid); // right half
        Divide(nums, mid + 1, last); // left half

        merge(nums, first, mid, last); // merge 

    }
    vector<int> sortArray(vector<int>& nums) {
        Divide(nums,0,nums.size() - 1);

        return nums;
    }
};