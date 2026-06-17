class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while(temp){
            ListNode* nextNode = temp->next;

            temp->next = prev;
            
            prev = temp;
            temp = nextNode;

        }

        return prev;
    }
};