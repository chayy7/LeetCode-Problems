class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> v;
        for(auto i: grid){
            for(auto j:i){
                v.push_back(j);
            }
        }
        int n = v.size();
        int rep = -1;
        map<int,int> mpp;
        for(auto i:v){
            mpp[i]++;
            
        }
        for(auto i:mpp){
            if(i.second > 1){
                rep = i.first;
            }

        }


        set<int> s(v.begin(),v.end());

        int miss= -1;
        int ts = n*(n+1)/2;
        int cs = 0;
        for(auto i:s){
            cs += i;
        }

        miss = ts-cs;

        cout << rep << " " << miss ;
        return {rep,miss};
    }
};