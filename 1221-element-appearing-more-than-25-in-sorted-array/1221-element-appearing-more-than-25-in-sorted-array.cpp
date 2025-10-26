class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int tf = 0.25*arr.size();
        map<int,int> mpp;
        for(auto i:arr){
            mpp[i]++;
        }

        int c = 0;
        for(auto i:mpp){
            if(i.second > tf){
                c=i.first;
            }
        }

        return c;
    }
};