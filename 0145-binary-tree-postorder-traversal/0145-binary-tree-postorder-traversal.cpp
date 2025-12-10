class Solution {
public:
    void trav(TreeNode* root, vector<int> &arr){
        if(!root)return;
        trav(root->left,arr);
        trav(root->right,arr);
        arr.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;
        trav(root,arr);
        return arr;
    }
};

