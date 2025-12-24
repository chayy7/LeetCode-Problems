class Solution {
public:
    int matrixSum(vector<vector<int>>& arr) {
        int row = arr.size();
        int col = arr[0].size();

        for (auto& i : arr) {
            sort(i.begin(), i.end());
        }
        int sum = 0;
        for (int i = 0; i < col; i++) {
            int maxx = INT_MIN;
            for (int j = 0; j < row; j++) {
                if (arr[j][i] > maxx) {
                    maxx = arr[j][i];
                }
            }
            sum += maxx;
        }
        return sum;
    }
};
