class Solution {
public:
    void trav(TreeNode* root, vector<int> &arr){
        if(!root)return;
        trav(root -> left, arr);
        arr.push_back(root -> val);
        trav(root -> right, arr);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        trav(root, arr);
        // if(arr.size()<= 1 && arr[0] != k)return false;
        // int start = 0;
        // int end = arr.size()-1;
        
        // while(start < end){
        //     int sum = arr[start] + arr[end];
        //     if(sum == k){
        //         cout << sum;
        //         return true;
        //     }
        //     else if(sum > k){
        //         end--;
        //     }else{
        //         start++;
        //     }
        // }
        // return false;
        
        
        
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i] + arr[j] == k){
                    return true;
                }
            }
        }
        return false;
    }
};

