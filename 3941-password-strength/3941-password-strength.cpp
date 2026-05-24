class Solution {
public:
    bool small(char c){
        return (c >= 'a' && c <= 'z');
    }

    bool cap(char c){
        return (c >= 'A' && c <= 'Z');
    }

    bool num(char c){
        return (c >= '0' && c <= '9');
    }

    bool spcl(char c){
        return (c == '!' || c == '@' || c == '#' || c == '$');
    }

    int passwordStrength(string password) {
        set<char> s(password.begin(), password.end());

        int sum = 0;
        for(char ch : s){

            if(small(ch)) {
                sum += 1;
            }
            else if(cap(ch)) {
                sum += 2;
            }
            else if(num(ch)) {
                sum += 3;
            }
            else if(spcl(ch)) {
                sum += 5;
            }
        }

        return sum;
    }
};