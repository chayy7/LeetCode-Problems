class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
                int cnt = 0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]%2 !=0){
                    if(nums[j]%2 ==0)cnt++;
                }
                else if(nums[i] %2 ==0){
                    if(nums[j] %2 !=0)cnt++;
                }
            }
            v.push_back(cnt);
        }

        return v;
    }
};