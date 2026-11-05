class Solution {
public:
    long long total = 0, ans = 0;

    long long dfs(TreeNode* root) {
        if (!root) return 0;

        return root->val + dfs(root->left) + dfs(root->right);
    }

    long long solve(TreeNode* root) {
        if (!root) return 0;

        long long sum = root->val + solve(root->left) + solve(root->right);

        ans = max(ans, sum * (total - sum));

        return sum;
    }

    int maxProduct(TreeNode* root) {
        total = dfs(root);
        solve(root);

        return ans % 1000000007;
    }
};