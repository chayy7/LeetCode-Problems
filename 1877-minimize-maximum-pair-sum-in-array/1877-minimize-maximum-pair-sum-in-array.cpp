class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> new_nums;
        sort(nums.begin(), nums.end());
        int st = 0, end = nums.size() - 1;
        while(st < end){
            new_nums.push_back(nums[st]);
            new_nums.push_back(nums[end]);
            st++;
            end--;
        }
        for(auto i: new_nums){
            cout << i << " ";
        }
        int left = 0, right = 1;
        int maxSum = INT_MIN;
        while(right < new_nums.size()){
            maxSum = max(maxSum, new_nums[left] + new_nums[right]);
            left += 2;
            right += 2;
        }
        
        
        
   
        return maxSum;
    }
};