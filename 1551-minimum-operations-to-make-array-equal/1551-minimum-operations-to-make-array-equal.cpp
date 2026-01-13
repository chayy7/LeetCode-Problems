class Solution {
public:
    int minOperations(int n) {
        vector<int> vals(n);
        for(int i=0;i<n;i++){
            vals[i] = (2 * i) + 1;
        }
        int sum = 0;
        for(auto i : vals){
            sum += i;
        }
        int target = sum/n;
        int ans = 0;
        for(auto i : vals){
            ans += abs(target - i);
        }
        
        return ans/2; 
        
    }
};