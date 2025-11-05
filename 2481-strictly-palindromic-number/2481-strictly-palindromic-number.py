class Solution:
    def isStrictlyPalindromic(self, n: int) -> bool:
        for i in range(2,n-1):
            if(bin(i)[2:]!= bin(i)[2:][::-1]):
                return False
        

        return True