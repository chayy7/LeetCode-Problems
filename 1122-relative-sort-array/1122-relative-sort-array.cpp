class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mpp;
        for(auto i:arr1){
            mpp[i]++;
        }

        


        vector<int> v;
        for(int i=0;i<arr2.size();i++){
            while(mpp[arr2[i]]--){
                v.push_back(arr2[i]);
            }
        }

        for(auto i:mpp){
            while(i.second > 0){
                v.push_back(i.first);
                i.second--;
            }
            cout << i.first << "->" << i.second << endl;
        }


        return v;
    }
};