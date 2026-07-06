class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& q, int x) {
        map<int,vector<int>> mpp;
        for(int i=0;i<nums.size();i++) mpp[nums[i]].push_back(i);

        vector<int> v(q.size(), -1);

        for(int i=0;i<q.size();i++){
            if(q[i] <= mpp[x].size()){
                v[i] = mpp[x][q[i]-1];
            }
        }

        return v;


    }
};