class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int cf = 0;
        int ct = 0;
        int ctw = 0;
        for(int i=0;i<n;i++){
            if(bills[i] == 5){
                cf++;
            }else if(bills[i] == 10){
                if(cf < 1){
                    return false;
                }else{
                    ct++;
                    cf--;
                }

            }else{
                if (ct >= 1 && cf >= 1) {
                    ct--;
                    cf--;
                } 
                else if (cf >= 3) {
                    cf -= 3;
                } 
                else {
                    return false;
                }
        }
        }

        return true;
    }
};