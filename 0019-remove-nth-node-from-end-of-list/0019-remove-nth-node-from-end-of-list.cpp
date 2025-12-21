class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        
        vector<int> v;
        int s = cnt-n;
        if(s == 0){
            temp=head;
            head= head->next;
            delete temp;
            return head;
        }
        
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(s--){
            prev=curr;
            curr=curr->next;
        }
        
        prev->next = curr->next;
        delete curr;
        
        
                
        return head;
        
    }
}; 

// let's do thiis? idk ll..fine i ll try it..ok naa yes