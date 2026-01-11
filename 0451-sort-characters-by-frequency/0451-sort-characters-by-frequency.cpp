class Solution {
public:
    string frequencySort(string s) {
        
        
        map<char,int> mpp;
        for(auto i:s){
            mpp[i]++;
        }
        
        // Custom Sort
        vector<pair<int,int>> v(mpp.begin(),mpp.end()); //Copying of map To Pair Based Vector
        
        sort(v.begin(),v.end(),[](auto &a, auto&b){
            return a.second > b.second;
        });
        
        
        
        
        
        
        string ans = "";
        for(auto &i:v){
            while(i.second > 0){
                ans += i.first;
                i.second--;
            }
        }
        
        return ans;
    }
};