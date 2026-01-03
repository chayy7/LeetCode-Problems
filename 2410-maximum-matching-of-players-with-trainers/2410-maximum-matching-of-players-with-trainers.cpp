class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());

        int l=0, r= 0;
        int cnt =0;
        while(l < p.size() && r < t.size()){
            if(p[l] <= t[r]){
                cnt++;
                l++,r++;
            }else{
                r++;
            }
        }

        return cnt;
    }
};