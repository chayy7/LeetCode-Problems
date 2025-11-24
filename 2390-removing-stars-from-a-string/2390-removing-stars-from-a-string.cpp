class Solution {
public:
    string removeStars(string s) {
        stack<int> ss;
        for(auto i:s){
            if(i=='*'){
                if(!ss.empty()) ss.pop();
            }else{
                ss.push(i);
            }
            
        }


        
        // int i = 0;
        // int n = s.size();

        string ans="";
        while(!ss.empty()){
            ans += ss.top();
            ss.pop();

        }
        // string ans="";
        // while(i<n){
        //     if(s[i]=='*'){
        //         s.pop();
        //     }

        //     ans += s[i];


        //     i++;
        // }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};