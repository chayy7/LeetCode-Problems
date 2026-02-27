class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root) return v;


        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size= q.size();
            vector<int> lvl;
            for(int i=0;i<size;i++){
                auto front= q.front(); q.pop();
                lvl.push_back(front->val);

                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            v.push_back(lvl);
        }
        return v;
    }
};