class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int left = 0, right = n - 1;
        vector<int> temp; 
        while(left <= right){
            temp.push_back(piles[right - 1]);
            left++, right -= 2;
        } 
        return accumulate(temp.begin(), temp.end(), 0);
    }
};