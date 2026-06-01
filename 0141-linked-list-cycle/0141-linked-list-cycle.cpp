class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> mpp;
        ListNode* temp=head;
        while(temp){
            if(mpp[temp] < 1){
                mpp[temp]++;
            }else{

                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};