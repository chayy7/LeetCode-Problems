class Solution {
public:
    void traverse(TreeNode* root, vector<int>& arr){ 
        if(root == NULL) return;
        traverse(root -> left, arr);
        arr.push_back(root -> val);
        traverse(root -> right, arr);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> arr;
        traverse(root, arr);
        long long min = LLONG_MAX; 
        for(int i=0;i<arr.size();i++){
            if(arr[i] < min){
                min = arr[i];
            }
        }
        long long secMin = LLONG_MAX;
        for(int i=0;i<arr.size();i++){
            if((arr[i] < secMin) && (arr[i] != min)){
                secMin = arr[i];
            }
        }
        if(secMin == LLONG_MAX)return -1;
        return secMin; 
    }
};
