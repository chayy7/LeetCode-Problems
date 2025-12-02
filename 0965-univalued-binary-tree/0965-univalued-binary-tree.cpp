class Solution {
public:
    void traverse(TreeNode* root, set<int>& uniqueVals){
        if(root == NULL) return;
        traverse(root -> left, uniqueVals);
        uniqueVals.insert(root -> val); 
        traverse(root -> right, uniqueVals);
    }
    bool isUnivalTree(TreeNode* root) {
        set<int> emptySet;
        traverse(root, emptySet);
        return emptySet.size() == 1;
    }
};
