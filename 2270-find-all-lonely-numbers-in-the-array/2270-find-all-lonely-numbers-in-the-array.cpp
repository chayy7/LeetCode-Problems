class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        vector<int> newv;

        for(auto i:mpp){
            if(i.second == 1){
                newv.push_back(i.first);
                // cout << i.first;
            }
        }

        for(auto i: newv){
            cout << i << " ";
        }
        cout << endl;
        for(auto i: nums){
            cout << i << " ";
        }
        vector<int> ans;
        unordered_set<int> st(nums.begin(), nums.end());

        for(auto i : newv){
            if(!st.count(i + 1) && !st.count(i - 1)){
                ans.push_back(i);
            }
        }


        return ans;
    }
};