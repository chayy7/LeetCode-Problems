class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> l;
        vector<int> r;

        int ts = 0;
        for(auto i:nums){
            ts += i;
        }
        int ls = 0;
        for(int i=0;i<nums.size();i++){
            l.push_back(ls);
            ls += nums[i];
        }
        int rs = 0;
        for(int i=0;i<nums.size();i++){
            rs += nums[i];
            r.push_back(ts-rs);
        }

        for(int i=0;i<nums.size();i++){
            nums[i] = abs(l[i]-r[i]);
        }


        return nums;

    }
};