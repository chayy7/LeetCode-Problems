class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());

        map<int,int> mpp;
        for(auto i:nums){
            mpp[i] += 1;
        }

        for(auto i: mpp){ 
            cout << i.first << "->" << i.second << " ";  
        }

        cout << '\n' <<maxi << " ";
        int ptr =1;
        for(auto i:mpp){
            if(i.first != ptr) return false;
            if(i.first != maxi && i.second != 1){
                return false;
            }else if(i.first == maxi && i.second != 2){
                return false;
            }


            ptr++;
        }
        return true;
    }
};