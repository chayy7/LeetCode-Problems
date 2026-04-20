class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int big= -1;
        vector<int> v(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            v[i] = big;
            // cout << arr[i];
            big=max(big,arr[i]);
        }
        return v;

    }
};