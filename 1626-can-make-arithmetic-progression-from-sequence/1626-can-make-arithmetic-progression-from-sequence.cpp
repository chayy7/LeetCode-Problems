class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        set<int> s;
        for(int i = 1;i<arr.size();i++){
            int c= arr[i]-arr[i-1];
            // diff = c;
            // v.push_back()
            s.insert(arr[i]-arr[i-1]);

            // int d=0;
            // if((arr[i]-arr[i-1]) != diff){

            //     return false;
            // }
            // d=arr[i]-arr[i-1];
            // diff = d;
        }

        // for(auto i:s){
        //     cout <<i <<endl;
        // }
        if(s.size() > 1){
            return false;
        }
        return true;
    }
};