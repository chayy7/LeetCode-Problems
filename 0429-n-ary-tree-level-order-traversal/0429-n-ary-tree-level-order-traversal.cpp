class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans ; 
        Node* temp;
        while(!q.empty()){
            int size = q.size();
            vector<int> nodes;
            while(size--){
                temp = q.front();
                q.pop();
                nodes.push_back(temp->val);
                
                for(auto child : temp->children){
                    if(child != nullptr){
                        q.push(child); 
                    }
                }
            }
            ans.push_back(nodes);
            
        }
        return ans;
    }
};