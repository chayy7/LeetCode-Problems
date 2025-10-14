class Solution:
    def reverseWords(self, s: str) -> str:
        s=s.split()
        c = [word[::-1] for word in s]
        return " ".join(c)
