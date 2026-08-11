class Solution {
    public int networkDelayTime(int[][] times, int n, int k) {
        List<List<int[]>> g = new ArrayList<>();
        for(int i=0;i<=n;i++) {
            g.add(new ArrayList<>());
        }
        for(int edge[] : times) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            g.get(u).add(new int[]{v, w});
        }
        int dist[] = new int[n+1];
        Arrays.fill(dist, Integer.MAX_VALUE);
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> Integer.compare(a[0], b[0]));
        dist[k] = 0;
        pq.add(new int[]{dist[k], k});
        while(!pq.isEmpty()) {
            int curr[] = pq.peek();
            pq.poll();
            int currNode = curr[1];
            int currDist = curr[0];
            if(currDist > dist[currNode]) {
                continue;
            }
            for(int edge[] : g.get(currNode)) {
                int adjNode = edge[0];
                int adjWeight = edge[1];
                if(currDist + adjWeight < dist[adjNode]) {
                    dist[adjNode] = currDist + adjWeight;
                    pq.add(new int[]{dist[adjNode], adjNode});
                }
            }
        }
        int ans = 0;

        dist[0] = 0;
        for(int x : dist) {
            if(x == Integer.MAX_VALUE) {
                return -1;
            }
            ans = Math.max(ans, x);
        }
        return ans;
    }
}