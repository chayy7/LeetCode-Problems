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
    void inorder(TreeNode* root, vector<int>& v){
        if(root == nullptr) return ;

        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    TreeNode* build( vector<int>& nums, int l, int r) {
        if (l > r)
        return nullptr;
        int m = (l + r) / 2;
        return new TreeNode(nums[m], build(nums, l, m - 1), build(nums, m + 1, r));
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        inorder(root, v);
        // for(auto i:v){
        //     cout << i << " ";
        // }

        return build(v,0, v.size()- 1);
    }
};