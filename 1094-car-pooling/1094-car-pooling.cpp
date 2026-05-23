class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> v(1001, 0);
        for(int i=0;i<trips.size();i++){
            int a=  trips[i][0];
            int b=  trips[i][1];
            int c=  trips[i][2];

            v[b] += a;
            v[c] -= a;
        }

        int pre = 0;
        for(int i=0;i<v.size();i++){
            pre += v[i];
            v[i] = pre;
        }

        for(auto i:v){
            if(i > capacity) return false;
        }
        return true;


    }
};