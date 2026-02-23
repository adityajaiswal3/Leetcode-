class Solution:
    def robThis(self, nums: List[int]) -> int:
        dp = [0] * len(nums)
        dp[0] = nums[0]
        dp[1] = nums[1]

        for i in range(2, len(nums)):
            dp[i] = nums[i] + max(dp[i-2], dp[i-3])

        return max(dp[-1], dp[-2])

    def rob(self, numsall: List[int]) -> int:
        if len(numsall) <= 3:
            return max(numsall)

        return max(self.robThis(numsall[:-1]), self.robThis(numsall[1:]))
        