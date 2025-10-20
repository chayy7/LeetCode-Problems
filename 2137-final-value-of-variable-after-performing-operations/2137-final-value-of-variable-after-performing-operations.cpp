class Solution {
public:
    int finalValueAfterOperations(vector<string>& arr) {
        int x = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == "++X" || arr[i] == "X++"){
                x++;
            }else{
                x--;
            }
        }
        
        return x;
        
    }
};
/*


i ll do , and in question also they mentioned the logic i did only, once see

u r great ey, 
asala verey logics u writing code

u code the ur logic i will see.

*/ 