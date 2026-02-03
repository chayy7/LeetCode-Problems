class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int count = duration;
        for(int i=1;i<timeSeries.size(); i++){
            int gap = timeSeries[i] - timeSeries[i-1];
            if(gap >= duration){
                count += duration;
            }else{
                count += gap;
            }
        }
        return count;
    }
};