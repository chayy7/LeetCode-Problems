class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();

        int sign =1;
        long long ans = 0;

        bool digit_started = false;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                digit_started = true;
                ans = ans * 10 + (s[i] - '0');
                if (ans > INT_MAX) {
                    return sign == 1 ? INT_MAX : INT_MIN;
                }
            }else if(s[i] == '-' && !digit_started){
                digit_started = true;
                sign = -1;
            }else if(s[i] == '+' && !digit_started){
                digit_started = true;
                sign = 1;
            }else if(s[i] == ' ' && !digit_started){
                continue;
            }
            else{
                break;
            }
        }
        return sign*ans;
    }
};