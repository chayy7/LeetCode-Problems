class Solution {
public:
    vector<int> divcnt(int n){
        vector<int> v;
        for(int i=1;i<= int(sqrt(n));i++){
            if(n%i == 0){
                // cnt++;
                v.push_back(i);
                if(n/i != i){
                    v.push_back(n/i);
                    // cnt++;
                }
            }
        }

        return v;
    }
    int sumFourDivisors(vector<int>& nums) {
        

        vector<vector<int>> c;
        for(int i=0;i<nums.size();i++){
            if(divcnt(nums[i]).size() == 4){
                c.push_back(divcnt(nums[i]));
            }
        }

        int s = 0;

        for(auto i:c){
            for(auto j:i){
                cout << j << " ";
                s += j;
            }
            cout << endl;
        }
        return s;

    }
};