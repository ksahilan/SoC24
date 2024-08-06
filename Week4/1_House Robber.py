class Solution:
    def rob(self, nums: List[int]) -> int:
        new, old = 0, 0
        for x in nums:
            new, old = max(x+old, new), new
        
        return new

  # https://leetcode.com/problems/house-robber/
