/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;
        vector<vector<int>> v;
        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int> lvl;
            for(int i=0;i<size;i++){
                auto front = q.front();
                lvl.push_back(front->val);
                q.pop();

                for(auto i:front->children){
                    if(i) q.push(i);
                }
            }
            v.push_back(lvl);
        }
        return v.size();
    }
};