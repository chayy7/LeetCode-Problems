class Solution {
public:
    bool check(vector<int> &v) {
        int a = 0, b = v.size() - 1;
        while (a < b) {
            if (v[a] != v[b])
                return false;
            a++;
            b--;
        }
        return true;
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node) {
                    level.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                } else {
                    level.push_back(INT_MIN);  // use a special marker for nulls
                }
            }

            if (!check(level)) return false;
        }

        return true;
    }
};