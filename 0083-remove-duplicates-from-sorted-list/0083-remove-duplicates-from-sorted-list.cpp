class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;

        ListNode* curr = head;
        ListNode* trav = head;
        while(trav){
            if(curr->val != trav->val){
                curr->next = trav;
                curr=trav;
            }
            trav=trav->next;
        }
        curr->next = nullptr;
        return head;
    }
};