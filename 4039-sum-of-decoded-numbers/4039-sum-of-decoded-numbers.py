class Solution:
    def sumDecoded(self, nums: list[int]) -> int:
        MOD = 10**9 + 7
        ans = 0

        for n in nums:
            width = n%10
            s = str(n//10)
            x = int(s[:width])
            y = int(s[width:])
            ans = (ans + pow(x,y,MOD))%MOD

        return ans
        