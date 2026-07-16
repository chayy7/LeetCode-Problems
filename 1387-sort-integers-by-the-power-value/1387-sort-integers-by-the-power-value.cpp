class Solution {
public:
    int count(int n){
        int cnt = 0;
        while(n != 1){
            if(n%2 == 0){
                n = n/2;
            }else{
                n = n*3 + 1;
            }
            cnt++;
        }
        return cnt;
    }
    int getKth(int lo, int hi, int k) {
        map<int,int> mpp;
        for(int i=lo;i<=hi;i++){
            mpp[i] = count(i);
        }

        vector<pair<int,int>> p(mpp.begin(), mpp.end());
        sort(p.begin(), p.end(), [](auto &a, auto &b){
            if(a.second == b.second){
                return a.first < b.first;
            }
            return a.second < b.second;
        });

        return p[k-1].first;
    }
};