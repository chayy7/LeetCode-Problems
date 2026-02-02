bool comp(pair<int, int>a, pair<int, int>b){
    if(a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,int> bitCount;
        for(auto i: arr){
        
            bitCount[i] = __builtin_popcount(i);
        }
        for(auto i: bitCount){
            cout << i.first << " "<< i.second << "\n";
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