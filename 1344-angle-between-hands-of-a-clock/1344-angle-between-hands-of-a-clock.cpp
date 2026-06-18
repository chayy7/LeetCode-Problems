class Solution {
public:
    double angleClock(int hour, int minutes) {
        double time = abs(hour*30 - 5.5*minutes);
        return min(time, 360-time);
    }
};