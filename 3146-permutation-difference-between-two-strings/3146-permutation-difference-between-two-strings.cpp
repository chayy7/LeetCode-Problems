class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int> mpp1;
        for(int i=0;i<s.size();i++){
            mpp1[s[i]] = i;
        }

        for(auto i:mpp1) cout << i.first << " " << i.second << endl;
        map<char,int> mpp2;
        for(int i=0;i<t.size();i++){
            mpp2[t[i]] = i;
        }
        for(auto i:mpp2) cout << i.first << " " << i.second << endl;

        int sum = 0;
        for(int i=0;i<s.size();i++){
            sum += abs(mpp1[s[i]] - mpp2[s[i]]);
        }

        return sum;
    }
};