class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int left = 0, right = 1;
        while(right < s.size()){
            int left_int = s[left] - '0'; 
            int right_int = s[right] - '0';
            int diff = abs(left_int - right_int);
            if(diff > 2){ 
                return false; 
            }
            left++, right++;  
        }
        return true;
    }
};