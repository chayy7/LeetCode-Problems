class Solution {
public:
    string toBit(int n){
        string s = "";
        while(n > 0){
            s = char((n % 2) + '0') + s;
            n /= 2;
        }
        return s;
    }
    int toInt(string bit){
        reverse(bit.begin(), bit.end());
        int sum = 0;
        for(int i=0;i<bit.size();i++){
            if(bit[i] == '1') sum += pow(2, i);
        }
        return sum;
    }
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        string bit = toBit(n);
        for(int i=0;i<bit.size();i++){
            if(bit[i] == '0'){
                bit[i] = '1';
            }else{
                bit[i] = '0';
            }
        }
        cout << bit;
        return toInt(bit);
    }
};