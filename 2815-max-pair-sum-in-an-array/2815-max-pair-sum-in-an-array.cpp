class Solution {
public:
    int ld(int n){
        int o= n;
        vector<int> v;
        while(o > 0){
            v.push_back(o%10);
            o /= 10;
        }
        sort(v.begin(), v.end());
        return v[v.size()-1];
    }
    int maxSum(vector<int>& nums) {
        vector<int> v[10];
        for(auto i:nums){
            int d = ld(i);
            v[d].push_back(i);
        }

        int maxi = -1;
        for(int i=0;i<10;i++){
            int cnt = 0;
            int sum = 0;
            if(!v[i].empty()){
                cout << i << "->";
                sort(v[i].rbegin(), v[i].rend());
                for(auto j:v[i]){
                    if(v[i].size() >= 2){
                        if(cnt <= 1) sum += j;
                        maxi = max(maxi,sum);
                        cout << j<< " ";
                        cnt++;
                    }
                    
                }
                cout << endl;
            }
        }
        return maxi;
    }
};