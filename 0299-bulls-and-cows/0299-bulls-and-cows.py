class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        xcnt = 0
        ycnt = 0

        s = []
        g = []



        for i in range(len(secret)):
            if secret[i] == guess[i]:
                xcnt += 1
            else:
                s.append(secret[i])
                g.append(guess[i])



        for ch in g:
            if ch in s:
                ycnt += 1
                s.remove(ch)  

        return f"{xcnt}A{ycnt}B"
