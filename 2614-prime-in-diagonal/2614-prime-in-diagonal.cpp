class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1)
            return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int maxPrime = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                if (i == j) {
                    if (isPrime(nums[i][j])) {
                        maxPrime = max(maxPrime, nums[i][j]);
                    }
                }else if(i + j == nums.size() - 1){
                    if (isPrime(nums[i][j])) {
                        maxPrime = max(maxPrime, nums[i][j]);
                    }
                }
            }
        }
        
        return maxPrime;
    }
};

