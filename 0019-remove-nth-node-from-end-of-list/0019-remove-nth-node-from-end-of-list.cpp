class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev = NULL;
        ListNode* justPrev = head;
        ListNode* curr = head->next;
         
        int len = 0;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        int deleteNode = len - n;
        if (deleteNode == 0) {
            return head->next;
        }
        int i=1;
        while(i < deleteNode){
            prev = justPrev;
            justPrev = justPrev -> next;
            curr = curr->next;
            i++;
        }
        justPrev->next = curr->next;
        return head;
        
    }
};








