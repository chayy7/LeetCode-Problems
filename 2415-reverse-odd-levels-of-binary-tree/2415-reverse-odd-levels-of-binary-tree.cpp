class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {

        if(root == nullptr) return root;

        // vector<vector<int>> v;
        queue<TreeNode*> q;
        q.push(root);

        int cnt =0;
        while(!q.empty()){
            int size = q.size();
            vector<TreeNode* > lvl;

            for(int i=0;i<size;i++){
                auto front = q.front();
                q.pop();

                lvl.push_back(front);

                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }

            if(cnt % 2 != 0){
                int l=0,r=lvl.size()-1;
                while(l < r){

                    swap(lvl[l]->val, lvl[r]->val);
                    l++, r--;
                }
            }
            
            cnt++;
        }

        // for(auto i:v){
        //     for(auto j:i){
        //         cout << j << " ";
        //     }
        //     cout << endl;
        // }

        return root;

    }
};