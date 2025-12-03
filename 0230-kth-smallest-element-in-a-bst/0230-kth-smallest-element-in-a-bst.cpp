class Solution {
public:
    void traverse(TreeNode* root, vector<int> &arr){
        if(root == NULL) return;
        traverse(root -> left, arr);
        arr.push_back(root -> val);
        traverse(root -> right, arr);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> emptyArr;
        traverse(root,emptyArr);
        
        return emptyArr[k-1];
        
    }
};


/* 

 */