class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int left = 0, right = n - 1;
        // vector<int> temp; 
        int ans=0;
        while(left <= right){
            // temp.push_back(piles[right - 1]);
            
            ans += piles[right - 1];
            left++, right -= 2;
        } 
        return ans;
    }
};