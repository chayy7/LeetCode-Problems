class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
            
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        vector<int> ans;
        for(auto i:mpp){
            if(i.second > nums.size()/3){
                ans.push_back(i.first);
            }
        }
        
        return ans;
        
             
        
 
        // int n = nums.size();
        //     vector <int> result;
        //     int duplicate = n/3;
        //     for(int i=0;i<n;i++){
        //         int count = 1;
        //         for(int j=i+1;j<n;j++){
        //             if(nums[i]==nums[j]){
        //                 count++;
        //             }
        //         }
            
        //         bool isThere = false;
        //         for(int k=0;k<result.size();k++){
        //             if(result[k] == nums[i]){
        //                 isThere = true;
        //                 break;
        //             }
        //         }
        //         if(count > duplicate && !isThere){
        //             result.push_back(nums[i]);
        //         }
                
        //     }
            
        //    return result; 
    }
};