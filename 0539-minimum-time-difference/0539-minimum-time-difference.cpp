class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int mini = INT_MAX;
        vector<int> v;

        for(auto i:timePoints){
            int h=stoi(i.substr(0,2));
            int m=stoi(i.substr(3,2));
            cout << h << " " << m<<endl;
            int tm=h*60+m;
            v.push_back(tm);

            cout << tm<<endl;
        }
        sort(v.begin(),v.end());
        for(auto i: v){
            cout << i << endl;
        }
        for (int i=1; i<v.size(); i++) {
            mini = min(mini, abs(v[i] - v[i-1]));
        }
        mini = min(mini, 1440 - (v.back() - v.front()));

        return mini;
    }
};