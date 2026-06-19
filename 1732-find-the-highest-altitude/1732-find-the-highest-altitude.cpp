class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        vector<int> v;
        v.push_back(0);
        int d=0;
        for(int i = 0;i< gain.size();i++){
            d += gain[i];
            v.push_back(d);
        }

        for(auto i: v){
            cout << i << " ";
        }
        return *max_element(v.begin(),v.end());

    }
};