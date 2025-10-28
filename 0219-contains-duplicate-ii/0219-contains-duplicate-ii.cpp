class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i = 0, j = i+1;

        map<int,int> mpp;
        for(int i = 0;i<nums.size();i++){
            if(mpp.find(nums[i]) != mpp.end()){
                // mpp[nums[i]] = i;
                int ii = mpp[nums[i]];
                int j = i;
                if(abs(ii-j) <= k)
                    return true;
            }
            mpp[nums[i]] = i;
        }

        for(auto m:mpp){
            // if(m.first )
            cout << m.first << " " << m.second<< endl;
        }


        return false;
    }
};