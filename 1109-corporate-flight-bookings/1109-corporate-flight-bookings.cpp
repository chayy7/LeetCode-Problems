class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n+1,0);

        for(int i=0;i<bookings.size();i++){
            int a= bookings[i][0];
            int b= bookings[i][1];
            int c= bookings[i][2];

            v[a] += c;
            if(n > b) v[b+1] -= c;
        }

        int pre = 0;
        for(int i=0;i<v.size();i++){
            pre += v[i];
            v[i] = pre;
        }
        return vector<int>(v.begin()+1, v.end());
    }
};