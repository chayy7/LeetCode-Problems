class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        graph = collections.defaultdict(list)
        for u, v, w in times:
            graph[u].append((v,w))

        minh = [(0,k)]
        visited= {}

        while minh:
            time,node =heapq.heappop(minh)

            if node in visited:
                continue
            visited[node] = time

            for ne,we in graph[node]:
                if ne not in visited:
                    heapq.heappush(minh, (time+we, ne))

        return max(visited.values()) if len(visited) == n else -1
