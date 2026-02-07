class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        if(time.size() < 2) return 0;
        map<int,int> mpp;
        
        int cnt=0;
        for(int i=0;i<time.size();i++){
            int r = time[i]%60;
            int need= (60 - r)%60;
            if(mpp.find(need) != mpp.end()){
                cnt+= mpp[need];
            }
            mpp[r]++;
        }
        return cnt;
    }
};