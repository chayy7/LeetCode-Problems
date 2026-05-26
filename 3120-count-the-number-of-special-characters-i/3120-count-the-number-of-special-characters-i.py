class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        l=set()
        u=set()
        for i in word:
            if i.islower():l.add(i)
            else:u.add(i)
        l=list(l)
        u=list(u)
        print(l)
        print(u)
        cnt = 0
        for i in l:
            if i.upper() in u:
                cnt += 1
        return cnt