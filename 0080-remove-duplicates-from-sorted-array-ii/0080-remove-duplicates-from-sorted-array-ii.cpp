class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map <int,int> freq;
        for(auto i: nums){
            freq[i]++;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]] > 2){
                freq[nums[i]]--;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
    
   
};