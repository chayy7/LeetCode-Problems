class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1)
            return false;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0){
                return false;
            }
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& arr) {
        map<int, int> freq;
        for (auto i : arr) {
            freq[i]++;
        }
        for(auto &i : freq){
            if(isPrime(i.second)){
                return true;
            }
        }
        return false;
    }
};