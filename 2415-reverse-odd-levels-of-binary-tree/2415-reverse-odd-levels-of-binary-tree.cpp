class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level;
        while(!q.empty()){
            int s = q.size();
            vector<int> vals;
            vector<TreeNode*> node;
            while(s--){
                TreeNode* temp = q.front();
                q.pop();
                vals.push_back(temp->val);
                node.push_back(temp);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(level % 2 != 0){
                reverse(vals.begin(), vals.end());
                for(int i=0;i<node.size();i++){
                    node[i]->val = vals[i];
                }
            }
            level++;
        }
        return root;
    }
};