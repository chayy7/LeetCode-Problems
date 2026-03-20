class Solution {
public:

    int hammingDistance(int x, int y) {
        
        string xBin = bitset<32>(x).to_string();
        string yBin = bitset<32>(y).to_string();
        int count = 0;
        for(int i=0;i<xBin.size();i++){
            if(xBin[i] != yBin[i]){
                count++;
            }
        }
        return count;
    }
};