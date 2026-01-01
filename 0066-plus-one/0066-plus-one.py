class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        c=""
        for i in digits:
            c += str(i)
        c=str(int(c) + 1)
        return list(map(int,c))