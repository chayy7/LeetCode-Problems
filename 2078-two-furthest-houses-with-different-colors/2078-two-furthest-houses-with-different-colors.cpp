class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0, j=colors.size()-1;
        int maxi=INT_MIN;
        while(i <= j){
            if(colors[i] == colors[j]){
                i++;
            }else{
                maxi = max(maxi, j-i);
                break;
            }
            
        }
        i=0, j=colors.size()-1;
        while(i <= j){
            if(colors[i] == colors[j]){
                j--;
            }else{
                maxi = max(maxi, j-i);
                break;
            }
            
        }
        return maxi;
    }
};