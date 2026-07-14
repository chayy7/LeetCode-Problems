class Solution {
public:
    long long calculateScore(vector<string>& ins, vector<int>& val) {
        int n=ins.size();
        
        map<int,int> mpp;


        int ptr = 0;

        long long ans = 0;
        while(mpp.find(ptr) == mpp.end() && !(ptr < 0) && !(ptr>=n)){



            if(ins[ptr] == "jump"){
                mpp[ptr]++;
                ptr = ptr+val[ptr];
            }else if(ins[ptr] == "add"){
                mpp[ptr]++;
                ans += val[ptr];
                ptr++;
            }
        }


        return ans;
        
    }
};