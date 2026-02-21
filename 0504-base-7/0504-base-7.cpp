class Solution {
public:
    string convertToBase7(int num) {
        // oye which playlist u following for dp?
        
        
        
        string base_7 = "";
        if(num < 0){
            num = abs(num);
            while(num > 0 ){
                base_7 += char((num % 7) + '0');
                num /= 7;
            }
            base_7 += "-"; 
        }else if(num > 0){
            while(num > 0){
                base_7 += char((num % 7) + '0');
                num /= 7;
            }
        }else{
            base_7 += '0';
        }
        reverse(base_7.begin(), base_7.end());
        return base_7;
    }
};