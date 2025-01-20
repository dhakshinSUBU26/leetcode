class Solution(object):
    def findPeakElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        maxvalue=nums[0]
        for i in nums:
            if i > maxvalue:
                maxvalue=i
        return(nums.index(maxvalue))

        
