class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }

        int maxi=0;
        int i=0, j =v.size()-1;
        while(i < j){
            maxi=max(maxi,v[i]+v[j]);
            i++;
            j--;
        }

        return maxi;
    }
};