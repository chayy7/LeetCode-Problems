class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> v;
        long long i=1;
        while(n > 0){
            int rem = n%10;
            if(rem*i != 0) v.push_back(rem*i);
            i *= 10;
            n /= 10;
        }

        reverse(v.begin(),v.end());

        return v;
    }
};