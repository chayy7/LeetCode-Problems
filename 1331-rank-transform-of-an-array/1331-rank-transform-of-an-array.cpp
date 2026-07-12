class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>p;
        for(auto i: arr){
            p.push_back(i);
        }
        sort(p.begin(),p.end());
        set<int> s(p.begin(),p.end());
        p.assign(s.begin(),s.end());
        map<int,int> mpp;
        for(int i = 0;i<p.size();i++){
            mpp[p[i]] = i+1;
        }


        vector<int> ans;
        for(int i = 0;i<n;i++){
            // if(mpp.find())
            ans.push_back(mpp[arr[i]]);
        }
        return ans;
    }
};