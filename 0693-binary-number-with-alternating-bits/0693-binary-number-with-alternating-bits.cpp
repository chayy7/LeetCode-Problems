class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        string bit = bitset<16>(n).to_string();
        
        string new_bit = bit.substr(bit.find('1'));
        
        
        cout << new_bit;
        
        for(int i=1;i<new_bit.size();i++){
            if(new_bit[i-1] == new_bit[i]) return false;
        }
        
        return true;
    }
};