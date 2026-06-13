class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        map<int,char> mpp;
        int j=0;
        for(int i=25;i>=0;i--){
            mpp[i] = 'a'+j;
            j++;
        }


        vector<int> v;
        for(auto i: words){
            int sum = 0;
            for(auto j :i ){
                sum += weights[j-97];
            }
            v.push_back(sum%26);
        }

        for(auto i:v){
            cout << i << " ";
        }
        for(auto i:mpp){
            cout << i.first << " " << i.second << endl;
        }


        string s="";
        for(auto i:v){
            s += mpp[i];
        }



        return s;
    }
};