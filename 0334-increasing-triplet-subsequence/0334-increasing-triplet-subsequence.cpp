class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();

        // vector<pair<int,int>> v;
        // for(int i=0;i<n;i++){
        //     v.push_back({nums[i],i});


        // }

        // sort(v.begin(),v.end());

        // for(auto i: v){
        //     cout << i.first << " " << i.second << endl;
        // }

        // int pre = -1;
        // int cnt = 0;
        // for(auto &i : v){
        //     if(i.second > pre){
        //         pre = i.second;
        //         cnt++;
        //         if(cnt == 3)return true;
        //     }
        // }


        int f=INT_MAX;
        int s=INT_MAX;
        for(auto i:nums){
            if(i <= f){
                f=i;
            }else if(i <= s){
                s = i;
            }else{
                return true;
            }
        }


        return false;
    }
};