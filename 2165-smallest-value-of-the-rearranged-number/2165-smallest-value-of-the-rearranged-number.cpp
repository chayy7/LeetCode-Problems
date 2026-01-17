class Solution {
public:
    long long smallestNumber(long long num) {
        if (num == 0) return 0;
        long long org = num;
        vector<string> v;
        long long numm = abs(num);
        while(numm > 0){
                int rem = numm%10;
                v.push_back(to_string(rem));
                numm /= 10;
        }
        if(org > 0){
            

            sort(v.begin(), v.end(), [](string &a, string &b){
                return a+b < b+a;
            });

            if(v[0] == "0"){
                for(int i=1;i< v.size();i++){
                    if(v[i] != "0"){
                        swap(v[0], v[i]);
                        break;
                    }
                }
            }
        }else{
            
            sort(v.begin(), v.end(), [](string &a, string &b){
                return a+b > b+a;
            });
        }

        string s = "";
        for(auto i:v){
            s += i;
        }

        long long ans = stoll(s);

        return org > 0? ans : -ans;






    }
};