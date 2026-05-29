class Solution {
public:
    int summ(int i){
        int n = i;
        int sum = 0;
        while(n > 0){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(auto i:nums){
            if(summ(i) < mini){
                mini = summ(i);
            }
        }
        return mini;
    }
};