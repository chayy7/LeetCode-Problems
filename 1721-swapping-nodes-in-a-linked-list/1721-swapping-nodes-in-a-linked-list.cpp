class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        int len = 0;
        while(curr){
            len++;
            curr = curr->next;
        }
        curr = head;
        int elem_from_first = k;
        int elem_from_last = (len - k) + 1;
        ListNode* st = head;
        ListNode* end = head;
        while(elem_from_first > 1){
            st = st -> next;
            elem_from_first--;
        }
        while(elem_from_last > 1){
            end = end -> next;
            elem_from_last--;
        }
        swap(st->val , end->val);
        return head;
 
    }
};