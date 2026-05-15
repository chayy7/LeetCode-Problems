class Solution {
public:
    int getSum(int a, int b) {
        if( b >= 0){

            while(b!= 0){
                a += 1;
                b-=1;
            }
        }else{

            while(b!= 0){
                a -= 1;
                b+=1;
            }
        }
        return a;
    }
};