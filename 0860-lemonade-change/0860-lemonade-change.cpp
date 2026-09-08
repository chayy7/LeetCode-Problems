class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int f = 0;
        int t = 0;
        int tw = 0;


        for(int i=0;i<n;i++){
            if(bills[i] == 5){
                f++;
            }else if(bills[i] == 10){
                if(f >= 1){
                    f--;
                    t++;
                }else{
                    return false;
                }

            }else{
                tw++;
                if(t >= 1 && f >= 1){
                    t -= 1;
                    f -= 1;
                }else if(f >= 3){
                    f -= 3;
                }else{
                    return false;
                }
            }
        }

        return true;
    }
};