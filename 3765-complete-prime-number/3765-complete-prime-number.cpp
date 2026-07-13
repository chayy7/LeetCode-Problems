class Solution {
public:
    bool isprime(int n){
        if(n <=1 ) return false;
        if(n == 2) return true;
        if(n % 2 ==  0) return false;

        for(int i=3;i*i<=n;i+=2){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }

    vector<int> p(vector<int>& prefixes, int num){
        string s = to_string(num);
        for(int i=1;i<=s.size();i++){
            prefixes.push_back(stoi(s.substr(0,i)));
        }
        return prefixes;
    }

    vector<int> s(vector<int>& suffixes, int num){
        string s = to_string(num);
        for(int i=0;i<s.size();i++){
            suffixes.push_back(stoi(s.substr(i)));
        }
        return suffixes;
    }
    bool completePrime(int num) {
        vector<int> prefixes;
        vector<int> suffixes;
        p(prefixes,num);
        s(suffixes,num);

        for(auto i:prefixes){
            if(!isprime(i)){
                return false;
            }
        }
        for(auto i:suffixes){
            if(!isprime(i)){
                return false;
            }
        }
        

        return true;
    }
};