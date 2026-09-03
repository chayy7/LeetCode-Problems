class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        seen = set()
        l = 0
        ml = 0

        for right in range(len(s)):
            while s[right] in seen:
                seen.remove(s[l])
                l+=1
            seen.add(s[right])
            ml = max(ml, right-l+1)

        return ml