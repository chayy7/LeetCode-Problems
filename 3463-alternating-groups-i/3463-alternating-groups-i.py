class Solution:
    def numberOfAlternatingGroups(self, c: List[int]) -> int:
        cnt = 0
        n=len(c)
        for i in range(len(c)):
            s = ""
            s += str(c[i-1]) 
            s += str(c[i])
            s += str(c[(i+1)%n])
           

            if(s== '101' or s == '010'):cnt+=1
        return cnt
                