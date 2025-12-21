class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();

        map<char,int> mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        // int I = 1;
        // int V = 5;
        // int X = 10;
        // int L = 50;
        // int C = 100;
        // int D = 500;
        // int M = 1000;

        int sum =0;
        for(int i=0;i<n-1;i++){
            if(mpp[s[i]] < mpp[s[i+1]]){
                sum -= mpp[s[i]];
            }else{

                sum += mpp[s[i]];
            }
        }

        sum += mpp[s[n-1]];

        return sum;

        
    }
};