class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> p(n);
        int prod = 1;
        for(int i=0;i<n;i++){
            p[i] = prod * nums[i];
            prod = prod * nums[i];
        }
        vector<int> s(n);
        int pro = 1;
        for(int i=n-1;i>=0;i--){
            s[i] = pro*nums[i];
            pro *= nums[i];
        }

        for(auto i:p){
            cout << i << " ";
        }
        for(auto i:s){
            cout << i << " ";
        }
        vector<int> v;


        for(int i=0;i<n;i++){
            if(i == 0){
                v.push_back(s[i+1]);
            }else if(i == n-1){
                v.push_back(p[i-1]);

            }else{
                v.push_back(p[i-1] * s[i+1]);
            }
        }

        return v;
    }
};