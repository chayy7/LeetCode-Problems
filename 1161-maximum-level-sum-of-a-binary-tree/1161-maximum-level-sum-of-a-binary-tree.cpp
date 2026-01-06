class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        vector<int> v;
        if(root == nullptr) return 0;

        queue<TreeNode* > q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int> lvl;

            for(int i=0;i<size;i++){
                TreeNode* front = q.front();
                q.pop();

                lvl.push_back(front->val);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }

            int s= 0;
            for(auto i:lvl){
                s += i;
            }

            v.push_back(s);
            
        }

        int maxi = *max_element(v.begin(),v.end());

        int ans = 0;

        for(int i=0;i<v.size();i++){
            if(v[i] == maxi){
                ans = i+1;
                break;
            }
        }

        return ans;
    }
};