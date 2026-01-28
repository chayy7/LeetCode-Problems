class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) { 
        vector<int> nums;
        for(auto i: matrix){
            for(auto j: i){
                nums.push_back(j);
            }
        }
        sort(nums.begin(), nums.end());
        for(auto i: nums){
            cout << i << " ";
        }
        return nums[k-1];
    }
};