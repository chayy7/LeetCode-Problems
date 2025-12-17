/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(root == nullptr) return 0;

        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int> lvl;
            for(int i=0;i<size;i++){
                auto front=q.front();
                q.pop();


                lvl.push_back(front->val);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }

            int sum=0;
            for(auto i:lvl){
                sum += i;
            }

            ans.push_back(sum);
        }

        int maxi = ans[0];
        int res = 0;
        for(int i=1;i<ans.size();i++){
            if(ans[i] > maxi){
                maxi = ans[i];
                res = i;
            }
        }

        return res+1;
    }
};