class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root) return {};


        queue<pair<TreeNode*, pair<int,int>>> q;
        q.push({root,{0,0}});
        map<int,map<int,multiset<int>>> mpp;
        while(!q.empty()){
            auto front = q.front();
            q.pop();

            auto currNode = front.first;
            auto vtl = front.second.first;
            auto lvl = front.second.second;

            mpp[vtl][lvl].insert(currNode->val);
            if(currNode->left){
                q.push({currNode->left, {vtl-1, lvl+1}});
            }
            if(currNode->right){
                q.push({currNode->right, {vtl+1, lvl+1}});

            }
        }


        vector<vector<int>> ans;
        for(auto i:mpp){
            vector<int> lvl;
            for(auto j:i.second){
                for(auto k:j.second){
                    lvl.push_back(k);
                }
            }
            ans.push_back(lvl);
        }

        return ans;
    }
};