class Solution {
public:
    void dfs1(TreeNode* root1, vector<int>& v1){
        if(!root1) return;

        if(!root1->left && !root1->right){
            v1.push_back(root1->val);
            return;
        }

        dfs1(root1->left, v1);
        dfs1(root1->right, v1);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        dfs1(root1, v1);
        vector<int> v2;
        dfs1(root2, v2);

        for(auto i:v1){
            cout << i << " ";
        }

        return v1 == v2;
    }
};