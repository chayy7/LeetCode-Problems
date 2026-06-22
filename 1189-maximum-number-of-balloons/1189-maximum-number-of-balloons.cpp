class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> mpp;
        for(auto i:text) mpp[i]++;

        int cnt = 0;
        while(mpp['b'] >= 1 && mpp['a'] >= 1 && mpp['l'] >= 2 && mpp['o'] >= 2 && mpp['n'] >= 1){
                cnt++;
                mpp['b']--;
                mpp['a']--;
                mpp['l']-=2;
                mpp['o']-=2;
                mpp['n']--;
            }
        

        return cnt;
    }
};