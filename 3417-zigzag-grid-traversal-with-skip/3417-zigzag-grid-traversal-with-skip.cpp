class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& arr) {
        vector<int> ans;
        int row = arr.size();
        int col = arr[0].size();
        vector<int> v;
        for(int i=0;i<row;i++){
            if(i % 2 != 0){
                reverse(arr[i].begin(), arr[i].end());
            }
            
            for(auto k:arr[i]){
                
                // cout << k << " ";
                v.push_back(k);
            }
        }
        
        int i=0;
        while(i < v.size()){
            ans.push_back(v[i]);
            i+=2;
        }
        
        return ans;
    }
};