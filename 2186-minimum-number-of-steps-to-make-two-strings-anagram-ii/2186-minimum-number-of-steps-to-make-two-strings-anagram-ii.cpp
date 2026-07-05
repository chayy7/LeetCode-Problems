class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mpp1; 
        unordered_map<char, int> mpp2;
        for(auto i: s){
            mpp1[i]++;
        }
        for(auto i: t){
            mpp2[i]++;
        }
        
        int ans = 0;
        for(int i='a';i<='z';i++){
            ans += abs(mpp1[i] - mpp2[i]);
        }
        return ans;
        

        
        
        
    }
};