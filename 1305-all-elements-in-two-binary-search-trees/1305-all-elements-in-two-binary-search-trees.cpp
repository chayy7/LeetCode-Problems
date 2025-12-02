class Solution {
public:
    void traverse(TreeNode* root, vector<int>& arr1){ 
        if(root == NULL) return;
        traverse(root -> left, arr1);
        arr1.push_back(root -> val);
        traverse(root -> right, arr1);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> arr1;
        vector <int> arr2;
        
        traverse(root1, arr1); // another q?waite
        traverse(root2, arr2); 
        
        vector <int> mergeArr;
        int i =0;
        int j =0;
        while(i < arr1.size() || j<arr2.size()){
            if(i < arr1.size()){
                mergeArr.push_back(arr1[i]);
                i++;
            }else{
                mergeArr.push_back(arr2[j]);
                j++;
            }
        }
        
        sort(mergeArr.begin(),mergeArr.end());
        return mergeArr;       
    }
};

/* 

 */