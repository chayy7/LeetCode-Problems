class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mpp;
        for(auto i:words){
            mpp[i]++;
        }


        vector<pair<string,int>> v(mpp.begin(),mpp.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            if (a.second == b.second)
                return a.first < b.first; 
            return a.second > b.second;
        });

        int c=0;
        vector<string> ans;
        for(auto i:v){
            if(c < k){
                ans.push_back(i.first);
            }
            c++;
            cout << i.first << " " <<i.second << endl;
        }
        // sort(v.begin(),)

        return ans;
    }
};