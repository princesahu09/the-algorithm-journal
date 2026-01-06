class Solution:
    def isGood(self, nums: List[int]) -> bool:

        n = len(nums)
        return sum(nums) == sum(range(n+1))-1