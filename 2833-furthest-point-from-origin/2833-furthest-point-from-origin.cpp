class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int lc = 0, rc=0;
        for(auto i:moves){
            if(i == 'L') lc++;
            else if(i == 'R')rc++;
        }
        int c=0;
        if(lc > rc){
            for(int i=0;i<moves.size();i++){
                if(moves[i]=='L'){
                    c-=1;
                }else if(moves[i]=='R'){
                    c+=1;
                }else{

                    c-=1;
                }
            }
        }else{
            for(int i=0;i<moves.size();i++){
                if(moves[i]=='L'){
                    c-=1;
                }else if(moves[i]=='R'){
                    c+=1;
                }else{

                    c+=1;
                }
            }
        }
        
        return abs(c);
    }
};