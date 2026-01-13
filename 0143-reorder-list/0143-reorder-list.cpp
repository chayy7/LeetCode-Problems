class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }

        int l=0, r= v.size()-1;
        vector<int> ans;
        while(l <= r){
            if(l == r){

                ans.push_back(v[l]);
            }else{
                ans.push_back(v[l]);
                ans.push_back(v[r]);
            }
            l++, r--;
        }

        int i =0;
        temp=head;
        while(temp){
            temp->val = ans[i++];
            temp=temp->next;

        }
    }
};