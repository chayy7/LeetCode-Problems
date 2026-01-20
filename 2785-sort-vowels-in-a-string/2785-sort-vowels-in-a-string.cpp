class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        string ans = "";
        string vowels=""; 
        for(auto i: s){
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E'|| i == 'I' || i == 'O' || i == 'U'){
                vowels += i;
                ans += "0";
            }else{
                
            ans += i;
            }
            
        }
        sort(vowels.begin(), vowels.end());
        cout << vowels << "\n";
                
        string finAns = "";
        int idx = 0; 
        for(int i=0;i<ans.size();i++){
            if(ans[i] == '0'){
                finAns += vowels[idx];
                idx++; 
            }else{
                finAns += ans[i];
            }
        }
        return finAns;
    }
};