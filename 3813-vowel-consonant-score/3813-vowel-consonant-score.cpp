class Solution {
public:
    int vowelConsonantScore(string s) {
        int vw= 0;
        int cs = 0;
        for(auto i:s){
            if(isalpha(i)){
                if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
                    vw++;
                }else{
                    cs++;
                }
            }
        }

        if(cs == 0) return 0;
        return (int) vw/cs;
    }
};