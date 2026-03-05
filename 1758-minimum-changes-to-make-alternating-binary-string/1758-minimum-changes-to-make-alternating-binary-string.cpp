class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        string s1= "";
        for(int i=0;i<n;i+=2){
            s1 += '0';
            s1 += '1';
        }
        cout << s1<<endl;
        string s2= "";
        for(int i=0;i<n;i+=2){
            s2 += '1';
            s2 += '0';
        }
        cout << s2;
        int ans1 = 0;
        int ans2 = 0;

        for(int i=0;i<n;i++){
            if(s[i] != s1[i]){
                ans1++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i] != s2[i]){
                ans2++;
            }
        }
        return min(ans1,ans2);
    }
};