class Solution {
public:
    void func(int n, vector<int>& ans){
        vector<int> temp;
        while(n>0){
            temp.push_back(n%10);
            n /= 10;
        }
        reverse(temp.begin(), temp.end());
        for(auto i:temp){
            ans.push_back(i);
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            func(nums[i], ans);
        }

        return ans;

    }
};