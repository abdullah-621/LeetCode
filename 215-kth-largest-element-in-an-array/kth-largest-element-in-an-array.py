class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        l = len(nums)
        index = l - k
        heapq.heapify(nums)
        
        while index:
            heapq.heappop(nums)
            index -= 1
        
        return nums[0]
        