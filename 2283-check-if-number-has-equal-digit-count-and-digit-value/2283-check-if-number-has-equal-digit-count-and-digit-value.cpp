class Solution {
public:
    bool digitCount(string num) {
        map<int,int> mpp;
        for(int i=0;i<num.size();i++){
            int nm = num[i]-'0';
            mpp[nm] += 1;
        }

        for(int i=0;i<num.size();i++){
            int nm = num[i]-'0';
            if(mpp[i] != nm){
                return false;
            }
        }

        return true;
    }
};