class Solution {
public:
    string addStrings(string num1, string num2) {
        int s1 = num1.size()-1;
        int s2 = num2.size()-1;


        int c1 = 0;
        int sum1;

        string ans1 = "";
        if(s1 >= s2){
            while(s2 >= 0){
                sum1 = (num1[s1]-'0')+(num2[s2]-'0')+c1;
                char c= '0'+sum1%10;
                ans1 += c;
                c1 = sum1/10;
                s1--, s2--;
            }
            while(s1 >= 0){
                sum1 = (num1[s1]-'0')+c1;
                char c= '0'+sum1%10;
                ans1 += c;
                c1 = sum1/10;
                s1--;
            }

            if(c1){
                ans1+='1';
            }

            reverse(ans1.begin(),ans1.end());           
        }

        s1 = num1.size()-1;
        s2 = num2.size()-1;
        int c2 = 0;
        int sum2;

        string ans2 = "";
        if(s2 > s1){
            while(s1 >= 0){
                sum2 = (num1[s1]-'0')+(num2[s2]-'0')+c2;
                char c= '0'+sum2%10;
                ans2 += c;
                c2 = sum2/10;
                s1--, s2--;
            }
            while(s2 >= 0){
                sum2 = (num2[s2]-'0')+c2;
                char c= '0'+sum2%10;
                ans2 += c;
                c2 = sum2/10;
                s2--;
            }

            if(c2){
                ans2+='1';
            }

            reverse(ans2.begin(),ans2.end());  

            return ans2;         
        }


        return ans1;
    }
};