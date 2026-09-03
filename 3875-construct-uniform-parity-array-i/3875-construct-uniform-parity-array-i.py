class Solution:
    def uniformArray(self, nums1: list[int]) -> bool:
        # n= len(nums1)

        # if n < 2:
        #     return False

        # evens = sum(1 for x in nums1 if x % 2 == 0)

        # odds = n-evens

        # if evens == n or odds == n:
        #     return n > 2

        # return True


        # return len(nums1) >= 2

        minodd = float('inf')

        for x in nums1:
            if x%2 == 1:
                minodd = min(minodd,x)

        
        for x in nums1:
            if x%2 == 0 and x < minodd:
                return True

        return True

        






