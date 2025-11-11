class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        c=x^y
        ans=bin(c).count('1')

        return ans