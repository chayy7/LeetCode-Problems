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
    bool isEvenOddTree(TreeNode* root) {
        if(root == nullptr) return false;

        vector<vector<int>> v1;
        vector<vector<int>> v2;

        queue<TreeNode* > q;
        q.push(root);


        int cnt=1;
        while(!q.empty()){
            vector<int> lvl;

            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* front=q.front();
                q.pop();

                lvl.push_back(front->val);

                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);

            }

            v1.push_back(lvl);
            if(cnt % 2 == 1){

                sort(lvl.begin(),lvl.end());
                lvl.erase(unique(lvl.begin(), lvl.end()), lvl.end());
                
            }else{
                sort(lvl.begin(),lvl.end(),greater<int>());
                lvl.erase(unique(lvl.begin(), lvl.end()), lvl.end());


            }

            v2.push_back(lvl);
            cnt++;

        }

        for(auto i:v1){
            for(auto j:i){
                cout << j << " ";
            }

            cout << endl;
        }
        for(auto i:v2){
            for(auto j:i){
                cout << j << " ";
            }

            cout << endl;
        }

        if(v1.size() != v2.size()) return false;

        vector<int> ans1;
        int ca1=1;
        for(auto i: v1){
            if(ca1%2  == 1){
                for(auto j:i){
                    if(j%2 != 1){
                        return false;
                    }
                    ans1.push_back(j);
                }
            }else{
                for(auto j:i){
                    if(j%2 != 0){
                        return false;
                    }
                    ans1.push_back(j);
                }

            }
            ca1+=1;
        }
        vector<int> ans2;
        int ca2=1;
        for(auto i: v2){
            if(ca2%2  == 1){
                for(auto j:i){
                    if(j%2 != 1){
                        return false;
                    }
                    ans2.push_back(j);
                }
            }else{
                for(auto j:i){
                    if(j%2 != 0){
                        return false;
                    }
                    ans2.push_back(j);
                }

            }
            ca2+=1;
        }

        for(auto i:ans1){
            cout << i << " ";
            
        }
        cout << endl;
        for(auto i:ans2){
            cout << i << " ";

        }

        

        return ans1==ans2;

    }
};