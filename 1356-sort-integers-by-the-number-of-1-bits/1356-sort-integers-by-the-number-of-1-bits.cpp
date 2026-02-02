bool comp(pair<int, int>&a, pair<int, int>&b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
         vector<pair<int,int>> sort_bitCout;
         for(int i=0;i<arr.size();i++){
            int cnt = __builtin_popcount(arr[i]);
            sort_bitCout.push_back({arr[i], cnt});
         }
         sort(sort_bitCout.begin(), sort_bitCout.end(), comp);
         
        vector<int> ans;
         for(auto i:sort_bitCout){
            ans.push_back(i.first);
         }


        return ans;
    }
};