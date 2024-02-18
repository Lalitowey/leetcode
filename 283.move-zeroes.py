#
# @lc app=leetcode id=283 lang=python
#
# [283] Move Zeroes
#

# @lc code=start
class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        zer_index = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                nums[i], nums[zer_index] = nums[zer_index], nums[i]
                zer_index += 1
        return nums
        
# @lc code=end

