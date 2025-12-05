class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ts= 0;
        for(auto i:nums){
            ts += i;

        }
        cout << ts;

        int cnt=0;
        int s = 0;
        for(int i= 0;i<nums.size()-1;i++){
            s+= nums[i];
            int diff = ts-s;
            if((s-diff) % 2 == 0){
                cnt++;
            }
            // for(int j=i+1;j<nums.size();j++){
            //     s += nums[j];

            // }
        }

        return cnt;

    }
};