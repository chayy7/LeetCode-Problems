bool comp(string &a, string &b){
    if(a.size() == b.size()){
        return a<b; 
    }
    return a.size() < b.size();
}
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), comp);
        int n = nums.size();
        
        // we sorting in descending order
        return nums[n - k]; // why k-1?
    }
};