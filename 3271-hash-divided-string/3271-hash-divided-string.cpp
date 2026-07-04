class Solution {
public:
    string stringHash(string s, int k) {
        int i =0,j=k-1;


        string e = "";
        while(j < s.size()){

            int cnt = 0;
            for(int l=i;l<=j;l++){
                cnt += (s[l] - 'a');
            }
            e += 'a'+(cnt%26);

            i+=k;
            j+=k;
        }
        return e;
    }
};