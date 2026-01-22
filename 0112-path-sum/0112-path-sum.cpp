class Solution {
public:
    void dfs(TreeNode* root, int& sum, vector<int>& v){
        if(!root) return;


        sum += root->val;
        if(!root->left && !root->right){
            v.push_back(sum);
            sum -= root->val;
            return;
        }

        dfs(root->left, sum, v);
        dfs(root->right, sum,v);
        sum -= root->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        int sum = 0;
        dfs(root, sum, v);

        for(auto i:v){
            if(i == targetSum) return true;
        }

        return false;

    }
};