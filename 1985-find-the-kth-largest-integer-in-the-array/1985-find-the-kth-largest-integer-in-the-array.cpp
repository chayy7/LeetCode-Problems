bool comp(string &a, string &b){
    if(a.size() != b.size()){
        return a.size() > b.size();
    }
    return a>b;
}
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), comp);
        int n = nums.size();
        return nums[k-1];
    }
};