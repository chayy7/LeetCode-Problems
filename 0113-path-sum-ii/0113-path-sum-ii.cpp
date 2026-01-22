class Solution {
public:
    void dfs(TreeNode* root, vector<int>& lvl, vector<vector<int>>& v){
        if(!root) return;
        
        lvl.push_back(root->val);
        if(!root->left && !root->right){
            v.push_back(lvl);
            lvl.pop_back();
            return;
        }

        dfs(root->left, lvl, v);
        dfs(root->right, lvl, v);
        lvl.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> v;
        vector<int> lvl;
        dfs(root, lvl, v);


        vector<vector<int>> ans;

        for(auto i:v){
            int sum = 0;
            for(auto j:i){
                sum+=j;
            }

            if(sum == targetSum){
                ans.push_back(i);
            }
        }



        return ans;
    }
};