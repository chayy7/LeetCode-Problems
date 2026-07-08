class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0, cnt = 0;
        for(int i=0;i<events.size();i++){
            if(events[i] == "0") score+= 0;
            else if(events[i] == "1") score+= 1;
            else if(events[i] == "2") score+= 2;
            else if(events[i] == "3") score+= 3;
            else if(events[i] == "4") score+= 4;
            else if(events[i] == "6") score+= 6;
            else if(events[i] == "WD") score++;
            else if(events[i] == "NB") score++;
            else if(events[i] == "W") cnt++;
            if(cnt >= 10){
                
                return {score,cnt >= 10 ? 10 : cnt};
            }
        }
        
        return {score,cnt >= 10 ? 10 : cnt};
    }
};