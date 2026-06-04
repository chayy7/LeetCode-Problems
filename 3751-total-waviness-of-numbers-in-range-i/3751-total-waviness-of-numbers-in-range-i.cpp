class Solution {
public:
    int cw(int n){
        int w = 0;
        string c = to_string(n);
        for(int i=1;i<c.size()-1;i++){
            int a = c[i-1]-'0'; 
            int b= c[i]-'0'; 
            int d = c[i+1]-'0'; 
            if((a < b && b > d )|| (a > b && b < d )){
                w++;
            }
        }
        return w;
    }
    int totalWaviness(int num1, int num2) {
        int cnt = 0;
        for(int i=num1;i<=num2;i++){
            cnt += cw(i);
        }
        return cnt;
    }
};