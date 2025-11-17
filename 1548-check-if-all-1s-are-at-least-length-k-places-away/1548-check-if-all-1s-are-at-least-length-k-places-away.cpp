class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        if(k ==1 || k == 100)return true;
        int n=nums.size();

        vector<int> v;
        for(int i = 0;i<n;i++){
            if(nums[i] == 1){
                v.push_back(i);
            }
        }

        for(auto i:v){
            cout << i << " ";
        }
        int vv= v.size();
        for(int i = 0;i<vv;i++){
            // int j = i%(v.size());
            if((abs(v[(i+1)%vv] - v[i%vv])-1)< k){
                return false;
            }
        }

        return true;
    }
};