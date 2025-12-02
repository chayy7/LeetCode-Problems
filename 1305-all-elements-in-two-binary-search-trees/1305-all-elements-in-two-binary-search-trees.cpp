class Solution {
public:
    void traverse(TreeNode* root, vector<int>& arr1){ 
        if(root == NULL) return;
        traverse(root -> left, arr1);
        arr1.push_back(root -> val);
        traverse(root -> right, arr1);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> arr1;
        vector <int> arr2;
        
        traverse(root1, arr1);
        traverse(root2, arr2);
        
        vector <int> mergeArr;
        for(auto i:arr1){
            mergeArr.push_back(i);
        }
        for(auto i:arr2){
            mergeArr.push_back(i);
        }
        
        sort(mergeArr.begin(),mergeArr.end());
        return mergeArr;       
    }
};