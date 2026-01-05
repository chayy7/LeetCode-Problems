class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int finalAns = 0;
        for(auto num:nums){
            int count = 0;
            int ans = 0;
            
            for(int i=1;i<= int(sqrt(num));i++){
                if(num % i == 0){
                    count++;
                    ans += i;
                    if(num/i != i){
                        count++;
                        ans+= num/i;
                    }
                }
            }
            if(count == 4){
                finalAns += ans;
            }
        }
        return finalAns;
    }
};





























// after this ques 55, 860, u keep on doing , i ll be back in 5 mins