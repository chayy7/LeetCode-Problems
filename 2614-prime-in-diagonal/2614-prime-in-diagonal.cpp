class Solution {
public:

    bool isprime(int n) {
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(i-j == 0 || i+j==nums[0].size()-1){
                    if(isprime(nums[i][j])) v.push_back(nums[i][j]);
                }
            }
        }

        if(v.empty()) return 0;

        return *max_element(v.begin(),v.end());
    }
};