class Solution:
    def concatenatedBinary(self, n: int) -> int:
        s=""
        MOD = 10**9+7
        for i in range(1, n+1):
            s+= str(bin(i)[2:])
        ans = int(s,2) % MOD
        print(ans)
        return ans