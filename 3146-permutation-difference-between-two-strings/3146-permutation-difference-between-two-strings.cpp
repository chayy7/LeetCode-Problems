class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            int a = i;
            int b = find(t.begin(), t.end(), s[i]) - t.begin();
            int dif = abs(a-b);
            ans += dif;
        }
        return ans;
    }
};