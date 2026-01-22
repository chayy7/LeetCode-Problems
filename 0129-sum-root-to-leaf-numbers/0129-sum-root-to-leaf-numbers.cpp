class Solution {
public:
    void dfs(TreeNode* root, vector<string>& v, string s){
        if(!root) return ;
        s += to_string(root->val);

        if(!root->left && !root->right){
            v.push_back(s);
            s.pop_back();
            return;
        }


        dfs(root->left, v, s);
        dfs(root->right, v, s);
        s.pop_back();
        // s -= to_string(root->val);
    }
    int sumNumbers(TreeNode* root) {
        vector<string> v;
        dfs(root, v, "");

        int sum = 0;
        for(auto i:v){
            sum += stoi(i);
        }

        return sum;
    }
};