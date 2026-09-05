class Solution {
public:
    string largestNumber(vector<int>& nums) {
       
        vector<string> chars(nums.size());
        
        for(int i=0;i<nums.size();i++){
            chars[i] = to_string(nums[i]);
        }
       
        sort(chars.rbegin(),chars.rend(), [](string &a, string &b){
            return a+b < b+a;
        });
        
        if(chars[0] == "0") return "0";
        string ans = "";
        for(auto i: chars){
            
            ans += i;
        }
        return ans;
        
    }
};