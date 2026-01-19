class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mpp;
        for(auto i:stones){
            mpp[i]++;
        }
        int ans = 0;
        for(auto i:jewels){
            ans += mpp[i];
        }

        return ans;
    }
};