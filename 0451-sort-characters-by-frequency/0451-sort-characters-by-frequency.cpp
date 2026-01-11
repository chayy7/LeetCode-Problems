class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (auto i : s) {
            freq[i]++;
        }
        string ans = "";
        while (!freq.empty()) {
            int max_freq = 0;
            char max_char;
            for (auto& i : freq) {
                if (i.second > max_freq) {
                    max_freq = i.second;
                    max_char = i.first;
                }
            }
            while(max_freq--){
                
                ans += max_char;
            }
            freq.erase(max_char);
        }
        return ans;
    }
};