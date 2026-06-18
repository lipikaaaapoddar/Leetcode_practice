class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hour_h = 0.5*minutes + 30* (hour%12);
        double min_h = 6*minutes ;
        double diff = abs(hour_h - min_h);
        return min(diff, 360-diff);
    }
};