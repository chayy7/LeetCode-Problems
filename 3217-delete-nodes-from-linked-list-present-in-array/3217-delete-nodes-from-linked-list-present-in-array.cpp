class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while(temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        unordered_set<int> numSet(nums.begin(), nums.end());
        
        vector<int> ans;
        for(int num : v) {
            if(numSet.find(num) == numSet.end()) {  
                ans.push_back(num);
            }
        }

        if(ans.empty()) return nullptr;

        ListNode* c = new ListNode(ans[0]);
        ListNode* curr = c;

        for(int i = 1; i < ans.size(); i++) {
            curr->next = new ListNode(ans[i]);
            curr = curr->next;
        }

        return c;
    }
};