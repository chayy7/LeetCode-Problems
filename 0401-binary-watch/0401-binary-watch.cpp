class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        if(turnedOn >= 9)return {};
        vector<string> ans;
        for(int hr=0;hr<12;hr++){ 
            int hr_bit_count = __builtin_popcount(hr);
            for(int min=0;min<60;min++){ 
                int min_bit_count = __builtin_popcount(min);
                if((hr_bit_count + min_bit_count) == (turnedOn)){
                    
                    string time = "";
                    if(min <= 9){
                        time = to_string(hr) + ":0" + to_string(min);
                    }else{
                        
                        time = to_string(hr) + ":" + to_string(min);
                    }
                    ans.push_back(time);
                }
            }
        }
        return ans;
            
    }
};