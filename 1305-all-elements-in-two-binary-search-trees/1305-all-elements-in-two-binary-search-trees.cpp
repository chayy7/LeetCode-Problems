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
    void inorder1(TreeNode* root1, vector<int>& v1){
        if(root1 == nullptr) return;

        inorder1(root1->left,v1);
        v1.push_back(root1->val);
        inorder1(root1->right,v1);
    }
    void inorder2(TreeNode* root2, vector<int>& v2){
        if(root2 == nullptr) return;

        inorder1(root2->left,v2);
        v2.push_back(root2->val);
        inorder1(root2->right,v2);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        inorder1(root1,v1);
        inorder2(root2,v2);

        vector<int> ans;
        for(auto i:v1){
            ans.push_back(i);
        }
        for(auto i:v2){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};