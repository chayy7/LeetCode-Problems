class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans; 
        if(!root) return ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            vector<int> nodes;
            while(size--){
                Node* temp = q.front();
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