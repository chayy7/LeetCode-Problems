class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int s = q.size();
            int prev = (level % 2 == 0) ? INT_MIN : INT_MAX;
            while(s--){
                TreeNode* temp = q.front();
                q.pop();
                if(level % 2 == 0 ){
                    if(temp->val % 2 == 0 || temp->val <= prev){
                        return false;
                    }   
                }else{
                    if(temp->val % 2 != 0 || temp->val >= prev){
                        return false;
                    } 
                }
                prev = temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            level++;
        }
        return true;
    }
};

