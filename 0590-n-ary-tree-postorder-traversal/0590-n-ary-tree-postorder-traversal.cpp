class Solution {
public:
    void post(Node* root, vector<int> &arr){
        if(!root)return;
        for(auto child : root->children){
            if(child != nullptr){
                post(child, arr);
            }
        }
        arr.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> arr;
        post(root, arr);
        return arr;
    }
};