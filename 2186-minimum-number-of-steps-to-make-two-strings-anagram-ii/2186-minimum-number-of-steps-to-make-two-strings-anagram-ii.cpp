class Solution {
public:
    int minSteps(string s, string t) {
        int cnt = 0;
        map<char,int> mpp1;
        for(auto i:s) mpp1[i]++;
        map<char,int> mpp2;
        for(auto i:t) mpp2[i]++;

        for(int i='a'; i<='z';i++){
            cnt += abs(mpp1[i] - mpp2[i]);
        }

        return cnt;
    }
};