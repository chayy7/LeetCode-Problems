class Solution {
public:
    void pre(TreeNode* root, vector<string> &arr, string temp){
        if(!root) return;
        temp+= to_string(root->val);
        if(!root->left && !root->right){
            arr.push_back(temp);
            return;
        }
        pre(root->left, arr,temp);
        pre(root->right, arr,temp);
    }
    int toDec(string s){
        int sum = 0;
        int p = 1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == '1'){
                sum += p;
            }
            p *= 2;
        }
        return sum;
    }
    int sumRootToLeaf(TreeNode* root) {
       
        vector<string> arr; 
        
        pre(root, arr,"");
        for(auto i:arr){
            cout << i << " ";
        }
        
        
        int n = arr.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            ans+= toDec(arr[i]);
        }
        
        return ans; 
    }
};