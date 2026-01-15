class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
          int n = nums.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            set<int> s1;
            set<int> s2;
            
            for(int j = 0;j<=i;j++){
                s1.insert(nums[j]);
            }
            for(int j = i+1;j<n;j++){
                s2.insert(nums[j]);
            }
            
            ans.push_back(s1.size() - s2.size());
        }
        
        return ans;
    }
};