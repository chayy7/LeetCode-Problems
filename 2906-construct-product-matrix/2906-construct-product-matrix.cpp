class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        vector<long long> nums;
        for(auto i:grid){
            for(auto j:i){
                nums.push_back(j);
            }
        }
        int n = nums.size();
        vector<long long> p(n);
        int prod = 1;
        for(int i=0;i<n;i++){
            p[i] = (prod * nums[i]) % 12345;
            prod = (prod * nums[i]) % 12345;
        }
        vector<long long> s(n);
        int pro = 1;
        for(int i=n-1;i>=0;i--){
            s[i] = (pro*nums[i]) % 12345;
            pro = (pro *nums[i]) % 12345;
        }

        
        vector<long long> v;


        for(int i=0;i<n;i++){
            if(i == 0){
                v.push_back(s[i+1] % 12345);
            }else if(i == n-1){
                v.push_back(p[i-1] % 12345);

            }else{
                v.push_back((p[i-1] * s[i+1]) % 12345);
            }
        }

        long long cnt = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                grid[i][j] = (v[cnt++]) % 12345;
            }
        }

        return grid;

    }
};