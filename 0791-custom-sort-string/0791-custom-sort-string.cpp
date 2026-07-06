class Solution {
public:
    string customSortString(string order, string s) {
        string ans ="";
        map<char,int> mpp;
        for(auto i:s){
            mpp[i]++;
        }


        for(auto i:order){
            while(mpp[i] > 0){
                ans += i;
                mpp[i]--;
            }
            mpp.erase(i);
        }

        for(auto i:mpp){
            cout << i.first << " " << i.second ;
            while(i.second--) ans += i.first;
        }

        return ans;
    }
};