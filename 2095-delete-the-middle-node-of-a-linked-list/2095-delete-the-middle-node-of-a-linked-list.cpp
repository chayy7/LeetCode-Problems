class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return nullptr;
        int len = 0;
        ListNode* temp = head;
        while(temp){
            len++;
            temp=temp->next;
        }


        temp=head;
        ListNode* prev = nullptr;
        int pos = len/2;
        while(pos){
            prev= temp;
            temp=temp->next;
            pos--;
        }

        prev->next =temp->next;
        return head;
    }
};