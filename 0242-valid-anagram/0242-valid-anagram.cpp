class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        map<char,int> mpp;
        map<char,int> mpp1;
        for(auto i:s){
            mpp[i]++;
        }
        for(auto i:t){
            mpp1[i]++;
        }

        for(auto i:mpp){
            cout << i.first << " " << i.second << endl;
        }
        for(auto i:mpp1){
            cout << i.first << " " << i.second << endl;
        }



        // for(int i=0;i<s.size();i++){
        //     cout << mpp[s[i]] << mpp1[s[i]] << endl;
        //     if( mpp[s[i]] != mpp1[s[i]] ) return false;
        // }

        return mpp==mpp1;
    }
};