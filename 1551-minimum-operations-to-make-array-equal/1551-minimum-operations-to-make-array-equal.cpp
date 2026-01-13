class Solution {
public:
    int minOperations(int n) {
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(2*i+1);
        }

        for(auto i: v){
            cout << i << " ";
        }

        int sum =0;
        for(auto i:v){
            sum += i;
        }
        int t = sum/v.size();

        int ans=0;
        for(int i=0;i<v.size()/2;i++){
            ans += t-v[i];
        }

        return ans;

    }
};