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
    void inorder(vector<int>& v, TreeNode* root){
        if(root == nullptr) return ;

        inorder(v,root->left);
        v.push_back(root->val);
        inorder(v,root->right);
        
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> v;
        inorder(v,root);

        long long  min = LLONG_MAX;
        for(auto i: v){
            if(i < min){
                min = i;
            }
        }

        long long smin = LLONG_MAX;
        for(auto i: v){
            if(i < smin && i != min){
                smin = i;
            }
        }

        cout << smin;
        if(smin == LLONG_MAX){
            return -1;
        }
        return smin;
    }
};