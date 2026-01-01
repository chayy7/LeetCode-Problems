class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        int t =0;
        if(n == 2){
            for(auto i:cost){
                t += i;
            }
            return t;
        }
        sort(cost.rbegin(),cost.rend());

        int mx = 0;
        for(int i=1;i<=n;i++){
            if(i%3 == 0){
                continue;
            }
            mx += cost[i-1];
        }

        // cout << mx << " ";

        // int c = n/2;
        // int s = 0;
        // for(int i=0;i<c;i++){
        //     s += cost[i];
        // }

        // cout << s;



        return mx;
        
    }
};