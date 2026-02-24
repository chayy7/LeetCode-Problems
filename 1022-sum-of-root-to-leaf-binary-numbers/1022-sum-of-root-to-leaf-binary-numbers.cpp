class Solution {
public:
    void func(TreeNode* root, vector<string>& ans, string temp){
        if(!root) return;

        temp += to_string(root->val);
        if(!root->left && !root->right){
            ans.push_back(temp);
            return;
        }

        func(root->left, ans, temp);
        func(root->right, ans, temp);
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<string> ans;

        func(root, ans,"");
        // for(auto i:ans){
        //     cout << i << " ";
        // }

        int anss=0;
        for(auto i:ans){
            anss += stoi(i, nullptr, 2);
        }
        cout << anss;
        
        return anss;
    }
};