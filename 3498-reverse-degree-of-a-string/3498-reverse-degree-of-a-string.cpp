class Solution {
public:
    
    int reverseDegree(string s) {
        int sum_pruduct = 0;
        for(int i=0;i<s.size();i++){
            int idx = i+1;
            int alpha_number = 'z' - s[i] + 1;
            int product = idx * alpha_number;
            sum_pruduct += product;
        }
        return sum_pruduct;
    }
};