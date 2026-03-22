class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        int lev = 0;
        while (!q.empty()) {
            int k = q.size();
            vector<int> temp;
            while (k--) {

                TreeNode* curr = q.front();
                q.pop();

                temp.push_back(curr->val);
                if (curr->left != NULL) {
                    q.push(curr->left);
                }
                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
            if (lev % 2 != 0) {
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
            } else {
                ans.push_back(temp);
            }
            lev++;
        }

        return ans;
    }
};