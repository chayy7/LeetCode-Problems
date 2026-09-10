class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mpp;

        for(auto i:arr) mpp[i]++;

        vector<pair<int,int>> p(mpp.begin(), mpp.end());
        sort(p.begin(), p.end(), [](auto &a , auto &b){
            if(a.second == b.second) return a.first < b.first;
            return a.second > b.second;
        });

        for(auto i:p){
            cout << i.first << " " << i.second << endl;
        }

        int n = arr.size();
        int half = n/2;

        int cnt  = 0;
        for(auto i:p){

            
            if(half > 0){
               half -= i.second;
               cnt++;
            }else{
                break;
            }
        }


        return cnt;
    }
};