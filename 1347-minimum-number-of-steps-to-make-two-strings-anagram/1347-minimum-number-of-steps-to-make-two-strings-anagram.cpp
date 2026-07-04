class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mpp1;
        map<char,int> mpp2;


        for(auto i:s){
            mpp1[i]++;
        }
        for(auto i:t){
            mpp2[i]++;
        }

        int cnt = 0;
        for(int i='a';i<='z';i++){
            
            if(mpp1[i] >mpp2[i])cnt += abs(mpp1[i]-mpp2[i]);
            
        }

        return cnt;
    }
};