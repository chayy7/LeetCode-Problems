class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        int shift = 3;
        string ans ="";
        for(auto i:longUrl){
            ans += i+3;
        }

        cout << ans;

        return ans;

    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int shift = 3;
        string ans ="";
        for(auto i:shortUrl){
            ans += i-3;
        }

        cout << ans;

        return ans;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));