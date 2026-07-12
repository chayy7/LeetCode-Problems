class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int sh = stoi(startTime.substr(0,2))*3600;
        int sm = stoi(startTime.substr(3,2))*60;
        int ss = stoi(startTime.substr(6,2));
        int totalS = sh+sm+ss;
        int eh = stoi(endTime.substr(0,2))*3600;
        int em = stoi(endTime.substr(3,2))*60;
        int es = stoi(endTime.substr(6,2));
        int totalE = eh+em+es;
        return  abs(totalE- totalS);
    }
};