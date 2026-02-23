class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long n=piles.size();


        long long l=1, r=*max_element(piles.begin(), piles.end());
        long long ans=0;
        while(l <= r){
            long long mid=l+(r-l)/2;

            long long hrs=0;
            for(auto i:piles){
                hrs += ceil((double)i/mid);
            }

            if(hrs <= h){
                ans=mid;
                r=mid-1;
            }else{
                l= mid+1;
            }
        }
        return ans;
    }
};