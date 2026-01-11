class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;

        for(auto i:s){
            mpp[i]++;
        }
        vector<pair<char,int>> v(mpp.begin(), mpp.end());
        
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        for(auto i:mpp){
            cout << i.first << " "<<i.second << endl;
        }

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