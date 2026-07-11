class Solution {
public:
    void digExtracter(int n,int dig, int &count){
        while(n > 0){
            int lastDig = n % 10;
            if(lastDig == dig){
                count++;
            }
            n /= 10;
        }
    }
    
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(auto i: nums){
            digExtracter(i, digit, count);
        }
        return count;
        
        
        
    }
};