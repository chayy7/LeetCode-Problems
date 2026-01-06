class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(root == nullptr) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int maxSum = INT_MIN;
        int ansLevel = 1;
        int level = 1;
        while(!q.empty()){
            int s = q.size();
            int sum = 0;
            while(s--){
                TreeNode* temp = q.front(); 
                q.pop();
                sum += temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(sum > maxSum){
                maxSum = sum;
                ansLevel = level;
            }
            level++;
        }
        return ansLevel;
    }
};

