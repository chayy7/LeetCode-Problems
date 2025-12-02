class Solution {
public:
    void traverse(TreeNode* root, vector<int>& arr){ 
        if(root == NULL) return;
        traverse(root -> left, arr);
        arr.push_back(root -> val);
        traverse(root -> right, arr);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> arr;
        traverse(root, arr);
        long long min = LLONG_MAX; 
        /* 
            when we find min , then INT_MAX;
            when we find max , then INT_MIN;
            this is always confusing for me, hmm hmm
         */
        for(int i=0;i<arr.size();i++){
            if(arr[i] < min){
                min = arr[i];
            }
        }
        long long secMin = LLONG_MAX;
        for(int i=0;i<arr.size();i++){
            if((arr[i] < secMin) && (arr[i] != min)){
                secMin = arr[i];
            }
        }
        if(secMin == LLONG_MAX)return -1;
        return secMin; 
    }
};


/* 

    our whole code is right, but why the test cases are not accepting?
    
    the answer is simple, we used INT instead of LONG LONG
    
    the test cases consists of LONG LONG 
    
    so if we keep LONG LONG instead of int, then it ll be ok



 */