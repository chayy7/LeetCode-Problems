class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int lev = 1;
        int maxSum = INT_MIN;
        int ansLev = 0;
        while (!q.empty()) {
            int k = q.size();
            int sum = 0;
            while (k--) {
                TreeNode* currNode = q.front();
                sum += currNode->val;
                q.pop();
                if (currNode->left) {
                    q.push(currNode->left);
                }
                if (currNode->right) {
                    q.push(currNode->right);
                }
            }
            if (sum > maxSum) {
                maxSum = sum;
                ansLev = lev;
            }
            lev++;
        }
        return ansLev;
    }
};