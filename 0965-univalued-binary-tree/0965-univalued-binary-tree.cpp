class Solution {
public:

    void inorder(TreeNode* root, set<int>& s){
        if(root == nullptr) return;
        //Step 1
        
        inorder(root->left,s);
        s.insert(root->val);
        inorder(root->right,s);
    }
    bool isUnivalTree(TreeNode* root) {
        
        set<int> s; 
        inorder(root,s);
        if(s.size() == 1) return true;
        
        return false;
        
         
    }
};