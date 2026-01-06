class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> level;
            int s = q.size();
            while(s--){ 
                TreeNode* temp = q.front();
                q.pop();
                level.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};