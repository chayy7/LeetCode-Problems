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
    int findBottomLeftValue(TreeNode* root) {
        if(root == nullptr) return 0;

        vector<vector<int>> v;
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

            v.push_back(lvl);
        }

        // int ans=0;
        // for(auto i:v){
        //     for(auto j:i){
        //         if()
        //     }
        // }

        return v[v.size()-1][0];
    }
};