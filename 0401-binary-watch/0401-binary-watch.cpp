class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int hour = 0;hour < 12; hour++){
            for(int min=0; min< 60;min++){
                string lvl ="";
                if(__builtin_popcount(hour) + __builtin_popcount(min) == turnedOn){
                    lvl += to_string(hour)+":";
                    if(min < 10){
                        lvl += "0";
                    }
                    lvl += to_string(min);
                    ans.push_back(lvl);
                }

                
                
            }
        }
        return ans;         
    }
};