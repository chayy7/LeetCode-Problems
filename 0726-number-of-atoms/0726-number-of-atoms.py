class Solution:
    def countOfAtoms(self, formula: str) -> str:
        st = [defaultdict(int)]

        i =0
        while i< len(formula):
            if formula[i] == '(':
                st.append(defaultdict(int))
                i += 1
            elif formula[i] == ')':
                i+= 1
                j = i

                while j < len(formula) and formula[j].isdigit():
                    j += 1
                mult = int(formula[i:j] or 1)

                curr = st.pop()
                for elem, cnt in curr.items():
                    st[-1][elem] += cnt*mult
                i = j
            else:
                j=i+1
                while j < len(formula) and formula[j].islower():
                    j += 1

                elem = formula[i:j]

                k = j

                while k < len(formula) and formula[k].isdigit():
                    k += 1
                cnt = int(formula[j:k] or 1)
                st[-1][elem] += cnt
                i=k

        ans = ""

        for elem in sorted(st[0]):
            ans += elem
            if st[0][elem] > 1:
                ans += str(st[0][elem])

        return ans