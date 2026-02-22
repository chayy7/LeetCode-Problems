class Solution {
public:
    vector<int> rot(int i, vector<int> temp){
        reverse(temp.begin(), temp.begin()+i);
        reverse(temp.begin()+i, temp.end());
        reverse(temp.begin(), temp.end());
        return temp;
    }
    bool check(vector<int>& nums) {
        vector<int> temp(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());
        vector<int> res(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(res == rot(i, temp)){
                return true;
            }
        }
        return false;
    }
};