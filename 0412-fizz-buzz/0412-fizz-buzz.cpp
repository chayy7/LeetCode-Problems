class Solution {
public:
    vector<string> fizzBuzz(int n) {
        /* 
            3-2 semester 
            Mid-2 (dates,day)
            April-6 mon CCDF 
            April-7 tue.  VAPT
            April-8 wed. CNS
            April-9 thrus ML 
            April-10 fri.  SARA 
            April-11 sat  MFAR 

            Lab externals dates 
            April-12 to April-15

            Sem (dates,Day)
            April-16 thrus CCDF 
            April-18 sat.    VAPT 
            April-20 mon.  CNS 
            April-22 wed     ML
            April-27 mon   SARA
            April-29 wed.   MFAR
            
            
            
            inka when we ll go to movie?
            if u can manage with civil tmrw, we can go ey babu
            offer kuda undhi for tickets
         
         */
        vector<string> ans;
        
        for(int i=1;i<=n;i++){
            if(i % 3 == 0 && i % 5 == 0){
                ans.push_back("FizzBuzz")  ;
            }
            else if(i % 3 == 0){
                ans.push_back("Fizz")  ;
            }
            else if(i % 5 == 0){
                ans.push_back("Buzz")  ;
            }
            else{
                ans.push_back(to_string(i))  ;
            }       
        }
        return ans;
        
    }
};