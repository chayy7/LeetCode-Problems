class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge_str = "";
        int st1 = 0, st2 = 0;
        while (st1 < word1.size() && st2 < word2.size()) {
            merge_str += word1[st1];
            merge_str += word2[st2];
            st1++;
            st2++;
        }
        if (st1 >= word1.size()) {
            while (st2 < word2.size()) {
                merge_str += word2[st2];
                st2++;
            }
        } else if(st2 >= word2.size()){
            while (st1 < word1.size()) {
                merge_str += word1[st1];
                st1++;
            }
        }
        return merge_str;
    }
};

