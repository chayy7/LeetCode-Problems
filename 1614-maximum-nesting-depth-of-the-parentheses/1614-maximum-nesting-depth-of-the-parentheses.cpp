class Solution {
public:
    int maxDepth(string s) {
        int maxi =INT_MIN;
        int cnt =0;
        for(auto i: s){
            if(i == '(') cnt++;
            else if(i == ')') cnt--;
            
            maxi=max(maxi,cnt);
        }

        return maxi;
    }
};