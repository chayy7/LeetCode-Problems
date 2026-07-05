class Solution {
public:
    int wateringPlants(vector<int>& p, int c) {
        int oc = c;
        int steps = 0;

        for(int i=0;i<p.size();i++){
            if(p[i] <= c){
                steps++;
                c -= p[i];
            }else{
                steps += i;
                steps += i+1;
                c = oc;
                c -= p[i];
            }
        }

        return steps;
    }
};