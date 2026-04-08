class Solution:
    def xorAfterQueries(self, nums: List[int], queries: List[List[int]]) -> int:
        mod = 10**9 + 7
        m=nums.copy()

        for li,ri,ki,vi in queries:
            indx = li
            while indx <= ri:
                nums[indx] =(nums[indx] * vi) % mod
                indx += ki

        res = 0
        for i in nums:
            res ^= i
        return res