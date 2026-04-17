class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode *temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        int i = 0;
        temp=head;
        while(temp){
            temp->val=v[i];
            i+=1;
            temp=temp->next;
        }
        return head;
    }
};
