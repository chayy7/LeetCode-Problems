class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<vector<int>> v;
        for(int i=0;i<n-k+1;i++){
            vector<int> lvl;
            for(int j=i;j<i+k;j++){
                lvl.push_back(nums[j]);
            }
            v.push_back(lvl);
        }

        vector<int> ans;

        for(auto i:v){
            map<int,int> mpp;
            for(auto j:i){
                mpp[j]++;
            }

            vector<pair<int,int>> p(mpp.begin(), mpp.end());
            sort(p.begin(), p.end(), [](auto &a, auto &b){
                if(a.second != b.second){
                    return a.second > b.second;
                }
                return a.first > b.first;
            });

            int sum = 0;

            if(p.size() < x) {
                for(auto val : i) sum += val;
            } else {
                for(int t = 0; t < x; t++) {
                    sum += p[t].first * p[t].second;
                }
            }


            ans.push_back(sum);
        }

        return ans;
    }
};