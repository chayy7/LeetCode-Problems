class Solution {
public:
    string defangIPaddr(string adr) {
        int n=adr.size();

        string c= "";
        for(int i=0;i<n;i++){
            if(adr[i] == '.'){
                c+="[.]";
            }else{
                c+=adr[i];
            }
        }

        return c;
    }
};