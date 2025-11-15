class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int> mpp;
        for(auto i:deck){
            mpp[i]++;
        }

        int gcdValue = 0;
        for (auto i : mpp) {
            gcdValue = __gcd(gcdValue, i.second);
        }
        return gcdValue > 1;
    }
};