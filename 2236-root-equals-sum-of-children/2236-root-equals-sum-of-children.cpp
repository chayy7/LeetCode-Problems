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

    void inorder(TreeNode* root,vector<int>& v){
        if(root == nullptr) return ;


        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    bool checkTree(TreeNode* root) {
        // vector<int> ans;
        // if(root == nullptr) return false;

        // queue<TreeNode* > q;
        // q.push(root);

        // while(!q.empty()){
        //     int size=q.size();
        //     for(int i=0;i<size;i++){
        //         TreeNode* front=q.front();
        //         q.pop();

        //         ans.push_back(front->val);
        //         if(front->left) q.push(front->left);
        //         if(front->right) q.push(front->right);
        //     }
        // }
        // int sum=0;
        // for(auto i:ans){
        //     cout << i << " ";
        //     sum += i;
        // }

        // if((sum - ans[0]) == ans[0]) return true;

        // return false;
        if(root == nullptr) return false;

        vector<int> v;
        inorder(root,v);
        if((v[0]+v[2]) == v[1]){
            return true;
        }
        return false;
    } 
};