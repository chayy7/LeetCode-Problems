class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        
        xcnt =0
        ycnt =0
        
        s=[]
        g=[]
            
        l =0
        r=0
        while(l < len(secret)):
            if(secret[l] == guess[r]):
                xcnt += 1
            else:
                s.append(secret[l])
                g.append(guess[l])
            l+=1
            r+=1
            
            
        for i in g:
            if i in s:
                ycnt+=1
                s.remove(i)
        ans=""
        ans += str(xcnt)
        ans += "A"
        ans += str(ycnt)
        ans += "B"
        return ans