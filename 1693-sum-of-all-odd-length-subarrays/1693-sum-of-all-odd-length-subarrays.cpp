class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();


        
        int ans = 0;
        vector<vector<int>> v;
        for(int i = 0;i<n;i++){
            vector<int> temp;
            for(int j = i;j<n;j++){
                temp.push_back(arr[j]);
                if(temp.size() % 2 != 0)
                    v.push_back(temp);
            }

        }

        for(auto i: v){
            for(auto j:i){
                ans += j;
            }
        }
        return ans;
    }
};