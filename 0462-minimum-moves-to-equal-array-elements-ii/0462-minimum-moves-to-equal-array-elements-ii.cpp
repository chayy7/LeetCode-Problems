class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int mid = nums[n/2];
        int moves = 0;
        for(int i: nums){
            int dif = abs(mid - i);
            moves += dif;
        }
        return moves;
    } 
};