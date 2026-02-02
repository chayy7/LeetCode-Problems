bool comp(pair<int, int>&a, pair<int, int>&b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        multimap<int,int> bitCount;
        for(auto i: arr){
            bitCount.insert({i,__builtin_popcount(i)});
        }
        vector<int> ans;
        
         vector<pair<int,int>> sort_bitCout(bitCount.begin(), bitCount.end());
         sort(sort_bitCout.begin(), sort_bitCout.end(), comp);
         
         for(auto i:sort_bitCout){
            ans.push_back(i.first);
         }


        return ans;
    }
};