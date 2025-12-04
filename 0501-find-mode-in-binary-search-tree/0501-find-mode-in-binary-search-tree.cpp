class Solution {
public:
    void traverse(TreeNode* root, vector<int>& arr) {
        if (root == NULL)
            return;
        traverse(root->left, arr);
        arr.push_back(root->val);
        traverse(root->right, arr);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> arr;
        traverse(root, arr);
        map<int, int> freq;
        for(auto i:arr){
            freq[i]++;
        }
        int maxFreq = 0;
        for(auto i : freq){ 
            maxFreq= max(maxFreq, i.second);
        }
        vector <int> res;
        for(auto i: freq){
            if(i.second == maxFreq){
                res.push_back(i.first);
            }
        }
        return res;
    }
};

