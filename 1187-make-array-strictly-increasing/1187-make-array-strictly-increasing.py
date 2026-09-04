class Solution:
    def makeArrayIncreasing(self, arr1: List[int], arr2: List[int]) -> int:
        n1 = len(arr1)
        n2 = len(arr2)
        arr2 = sorted(set(arr2))

        INF = float('inf')
        dp = {-1: 0}

        for x in arr1:
            ndp ={}

            for prev, ops in dp.items():
                if x > prev:
                    ndp[x] = min(ndp.get(x,INF), ops)
                k = bisect_right(arr2, prev)

                if k < len(arr2):
                    y = arr2[k]
                    ndp[y] = min(ndp.get(y,INF), ops+1)
            dp = ndp
            if not dp:
                return -1

        return min(dp.values(), default = -1)