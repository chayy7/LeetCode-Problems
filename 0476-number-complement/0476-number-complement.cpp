class Solution {
public:
    string toBin(int n){
        string s = "";
        while(n > 0){
            s = char((n % 2) + '0') + s;
            n /= 2;
        }
        return s;
    }
    int toInt(string n){
        int sum = 0;
        long long ptr = 1;
        for(int i=n.size()-1;i>=0;i--){
            if(n[i] == '1'){
                sum += ptr;
            }
            ptr *= 2;
        }
        
        return sum;
    }
    int findComplement(int num) {
        if(num == 1) return 0;
        if(num == 0) return 1;
        string bit = toBin(num);
        for(int i=0;i<bit.size();i++){
            if(bit[i] == '1'){
                bit[i] = '0';
            }else{
                bit[i] = '1';
            }
        }
        return toInt(bit);
    }
};