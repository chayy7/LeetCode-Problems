class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();

        string s ="";
        for(int i = 0;i<max(n1,n2);i++){
            if(i < n1) s += word1[i];
            if(i < n2) s += word2[i];

        }

        return s;
    }
};