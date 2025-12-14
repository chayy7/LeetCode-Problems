class Solution:
    def reverseWords(self, s: str) -> str:
        s=s.split()
        cnt=0
        for i in s[0]:
            if i in "aeiou":
                cnt+=1
        print(cnt)

        c = ""
        for i in range(len(s)):
            cnt1 = 0
            for j in s[i]:
                if j in "aeiou":
                    cnt1+=1
            if i != 0 and cnt==cnt1:
                    
                c += s[i][::-1] 
            else:
                c += s[i]
            if(i != len(s)- 1):c+=" "
                
                
             
        return c