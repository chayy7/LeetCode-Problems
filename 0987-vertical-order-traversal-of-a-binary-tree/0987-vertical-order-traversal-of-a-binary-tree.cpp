class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;

        map<int, map<int, multiset<int>>> mpp;
        queue<pair<TreeNode*, pair<int,int>>> q;

        q.push({root, {0, 0}});

        while(!q.empty()){
            auto [node, pos] = q.front();
            q.pop();

            int hd = pos.first;
            int row = pos.second;

            mpp[hd][row].insert(node->val);

            if(node->left)
                q.push({node->left, {hd-1, row+1}});

            if(node->right)
                q.push({node->right, {hd+1, row+1}});
        }

        for(auto &col : mpp){
            vector<int> temp;

            for(auto &row : col.second){
                temp.insert(temp.end(),
                            row.second.begin(),
                            row.second.end());
            }

            ans.push_back(temp);
        }

        return ans;
    }
};