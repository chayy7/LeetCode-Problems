class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        visited = [False]*n
        p = 0

        def dfs(city: int):
            for neighbour in range(n):
                if isConnected[city][neighbour] == 1 and not visited[neighbour]:
                    visited[neighbour] = True
                    dfs(neighbour)

        for i in range(n):
            if not visited[i]:
                p += 1
                visited[i] = True
                dfs(i)

        return p