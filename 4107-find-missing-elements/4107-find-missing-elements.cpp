class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> v;
        int max = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());
        for(int i = min;i<=max;i++){
            if(find(nums.begin(), nums.end(),i) == nums.end()){
                v.push_back(i);
            }
        }

        return v;
    }
};