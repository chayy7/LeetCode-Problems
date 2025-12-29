class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> v(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            int rev = 0;
            while(nums[i] > 0){
                int rem = nums[i] % 10;
                rev = rev*10+rem;
                nums[i] /= 10;
            }
            v.insert(rev);
        }

        for(auto i:v){
            cout << i << " ";
        }

        return v.size();
    }
};