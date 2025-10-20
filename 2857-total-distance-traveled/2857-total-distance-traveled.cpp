class Solution {
public:
    int distanceTraveled(int mt, int at) {
        int cnt =0;
        int i = 1;
        while(mt != 0){
            cnt += 10;
            if(i % 5 == 0 && at > 0){
                mt++;
                at--;

            }
            mt--;
            i++;
        }

        return cnt;
    }
};