class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a = fabs((hour*30)-(minutes*5.5));
        return min(a,360-a);
    }
};