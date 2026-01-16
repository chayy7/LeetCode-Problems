class Solution {
public:
    bool upper(string word){
        for(auto i: word){
            if(!isupper(i)){
                return false;
            }
        }
        return true;;
    }
    bool lower(string word){
        for(auto i: word){
            if(!islower(i)){
                return false;
            }
        }
        return true;
    }
    bool cap(string word){
        if(!isupper(word[0]))return false;
        for(int i =1;i<word.size();i++){
            if(!islower(word[i]))return false;
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        int cap1 = upper(word);
        int cap2 = lower(word);
        int cap3 = cap(word);
        
        
        if(cap1 || cap2 || cap3){
            return true;
        }
        
        return false;
        
        
    }
};