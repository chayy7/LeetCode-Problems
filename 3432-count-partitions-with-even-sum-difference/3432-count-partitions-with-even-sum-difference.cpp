class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        int prevSum = 0;
        for(int i=0;i<nums.size()-1;i++){
            prevSum += nums[i];
            int nextSum = 0;
            for(int j=i+1;j<nums.size();j++){
                nextSum += nums[j];
            }
            if((prevSum - nextSum) % 2 == 0){
                count++;
            }
        }
        return count;
    }
};

/* 

 */