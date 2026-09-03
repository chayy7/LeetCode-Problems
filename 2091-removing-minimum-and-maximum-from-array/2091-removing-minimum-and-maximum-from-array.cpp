class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int n= nums.size();

       if(n <= 2) return n;

       int minp = 0;
       int maxp = 0;
       for(int i=1;i<n;++i){
            if(nums[i] < nums[minp]) minp=i; 
            if(nums[i] > nums[maxp]) maxp=i; 
       }


       int l= min(minp, maxp);
       int r= max(minp, maxp);

       int p1 = r+1;
       int p2 = n-l;

       int p3 = (l+1) + (n-r);

       return min(min(p1,p2),p3);

    }
};