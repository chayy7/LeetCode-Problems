class Solution {
public:
    bool isnum(string s){
        if(s=="C" || s=="D" || s=="+"){
            return false;
        }
        return true;
    }
    int calPoints(vector<string>& operations) {
        vector<int> v;
        for(int i=0;i<operations.size();i++){
            if(isnum(operations[i])){
                v.push_back(stoi(operations[i]));
            }else if(operations[i] == "C"){
                v.pop_back();
            }else if(operations[i] == "D"){
                v.push_back(2*v.back());
            }else if(operations[i] == "+"){
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }
        }

        return accumulate(v.begin(), v.end(), 0);
    }
};