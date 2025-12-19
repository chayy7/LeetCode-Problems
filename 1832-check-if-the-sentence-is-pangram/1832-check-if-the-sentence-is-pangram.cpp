class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> v(26,0);

        for(auto i:sentence){
            int idx = i-'a';
            v[idx] = 1;
        }

        for(auto i:v){
            if(i == 0){
                return 0;
            }
        }

        return 1;
    }
};