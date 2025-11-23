class Solution {
public:
    string toBin(int n) {
        string s = bitset<32>(n).to_string();
        return s.substr(s.find('1'));
    }
    vector<int> evenOddBit(int n) {
        
        string c= toBin(n);
        reverse(c.begin(),c.end());
        cout << c;
        int e = 0;
        int o = 0;
        for(int i = 0;i<c.size();i++){
            if(c[i] == '1'){
                if(i%2 != 0){
                    o+=1;
                }else{
                    e+=1;
                }
                
            }
        }

        return {e,o};
    }
};