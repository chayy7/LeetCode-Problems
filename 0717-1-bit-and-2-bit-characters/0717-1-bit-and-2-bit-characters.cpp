class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int pointer = 0;
        while(pointer < n-1){
            if(bits[pointer] == 1){
                pointer += 2;
            }
            else{
                pointer++;
            }
        }
        return pointer == n-1;
    }
};