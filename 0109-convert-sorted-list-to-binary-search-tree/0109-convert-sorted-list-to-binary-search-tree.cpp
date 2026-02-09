class Solution {
public:
    TreeNode* build( vector<int>& nums, int l, int r) {
        if (l > r)
        return nullptr;
        int m = (l + r) / 2;
        return new TreeNode(nums[m], build(nums, l, m - 1), build(nums, m + 1, r));
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        ListNode* curr = head;
        while(curr){
            v.push_back(curr->val);
            curr= curr->next;
        }

        return build(v,0, v.size()- 1);
    }
};