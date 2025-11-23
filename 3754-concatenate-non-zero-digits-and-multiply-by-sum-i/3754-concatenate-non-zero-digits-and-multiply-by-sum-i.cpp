class Solution {
public:
    long long sumAndMultiply(int n) {
        string nn = to_string(n);
        string s ="";
        long long sum = 0;
        for(auto i:nn){
            if(i != '0'){
                s+=i;
                sum += i-'0';
            }
        }
        if(s.empty()) {
            return 0;
        }



        long long c = stoll(s);
        cout << c;
        cout << sum;


        return c*sum;
    }
};