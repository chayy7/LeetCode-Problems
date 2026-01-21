class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        vector<int> v;
        ListNode* temp= head;
        while(temp){
            v.push_back(temp->val);
            temp= temp->next;
        }

        temp=head;
        int l= 0, r= 1;
        while(r < v.size()){
            swap(v[l], v[r]);
            l+=2, r+=2;
        }

        int i=0;
        
        while(temp){
            temp->val = v[i++];
            temp=temp->next;
        }

        return head;


    }
};