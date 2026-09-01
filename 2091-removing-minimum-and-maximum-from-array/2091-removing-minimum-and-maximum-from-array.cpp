class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        int mini_idx= -1;
        int maxi_idx= -1;

        for(int i=0;i<n;i++){
            if(nums[i] == mini){
                mini_idx = i;
            }
            if(nums[i] == maxi){
                maxi_idx = i;
            }
        }

        // int mini_bidx = -1;
        // int maxi_bidx = -1;

        int mini_bidx = n- mini_idx ;
        int maxi_bidx = n-maxi_idx;




        cout << mini_idx << endl;
        cout << maxi_idx << endl;
        cout << mini_bidx << endl;
        cout << maxi_bidx << endl;

        int ff = max(mini_idx+1, maxi_idx+1);
        int bb = max(mini_bidx, maxi_bidx);
        int fb = min(mini_idx+1+ maxi_bidx, mini_bidx+1+maxi_idx);


        return min(ff,min(bb,fb));
    }
};