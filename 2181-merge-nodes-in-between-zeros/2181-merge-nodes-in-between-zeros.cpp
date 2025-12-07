/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head->next; 
        int sum = 0;
        while (temp != nullptr) {
            sum += temp->val;
            if (temp->val == 0) {
                ans.push_back(sum);
                sum = 0;
            } 
            temp = temp->next;
        }
        if(ans.empty()) return nullptr;

        ListNode* c=new ListNode(ans[0]);
        ListNode* curr=c;

        for(int i= 1;i<ans.size();i++){
            curr->next = new ListNode(ans[i]);
            curr = curr->next;
        }


        


        
        return c;
    }
};