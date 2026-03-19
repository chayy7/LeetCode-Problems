class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();

        if(flowerbed[0] == 1){
            int i = 0;
            while(i < s && n > 0){
                
                if(flowerbed[i] == 0){
                    
                    if(i != 0 && flowerbed[i-1] == 1){
                        i++; continue;  
                    }
                    
                    if(i != s-1 && flowerbed[i+1] == 1){
                        i++; continue;
                    }
                    
                    flowerbed[i] = 1;
                    n--;
                }
                
                i += 2;
            }
        }

        if(flowerbed[0] == 0){
            if(n > 0 && (s == 1 || flowerbed[1] == 0)){
                flowerbed[0] = 1;
                n--;
            }

            int i = 2;
            while(i < s && n > 0){
                
                if(flowerbed[i] == 0){
                    
                    if(i != 0 && flowerbed[i-1] == 1){
                        i++; continue;
                    }
                    
                    if(i != s-1 && flowerbed[i+1] == 1){
                        i++; continue;
                    }
                    
                    flowerbed[i] = 1;
                    n--;
                }
                
                i += 2;
            }
        }

        if(n > 0){
            return false;
        }
        return true;
    }
};