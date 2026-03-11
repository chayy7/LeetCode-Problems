import numpy as np
class Solution:
    def bitwiseComplement(self, n: int) -> int:
        c=np.base_repr(n,base=2)
        print(c)
        d=""
        for i in c:
            if i == "1":d+='0'
            elif i == '0':d+='1'
        return int(d,2)