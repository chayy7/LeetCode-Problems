class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        map<int, int> freq;
        for (int i : arr) {
            freq[i]++;
        }
        //  put proper name yar

        vector<int> ans;
        while (k--) {
            int maxfreq = -1;
            int key = -1;

            for (auto i : freq) {
                if (i.second > maxfreq) {
                    maxfreq = i.second;
                    key = i.first;
                }
            }

            ans.push_back(key);
            freq.erase(key);
        }

        return ans;
    }
};

/*
    okkkk
 */