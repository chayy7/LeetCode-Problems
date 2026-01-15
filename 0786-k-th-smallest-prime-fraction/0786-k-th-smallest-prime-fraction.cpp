class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        map<double,pair<int,int>> mpp;
        for(int i =0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                double c = (double)arr[i]/arr[j];
                mpp[c] = {arr[i], arr[j]};
            }
        }

        int cnt = 0;
        for(auto i:mpp){
            cnt++;
            if(cnt == k){
                return {i.second.first, i.second.second};
            }
        }

        return {};
    }
};
