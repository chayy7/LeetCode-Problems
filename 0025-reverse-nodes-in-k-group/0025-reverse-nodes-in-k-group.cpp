/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr) return head;

        vector<int> v;
        ListNode*temp = head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }

        temp=head;

        for(int i=0;i<v.size();i+=k){
            if(i+k <= v.size()){
                 reverse(v.begin()+i,v.begin()+k+i);
            }
        }
        for(auto i:v){
            cout << i << " ";
        }


        int i=0;
        while(temp){
            temp->val = v[i++];
            temp=temp->next;
        }

        return head;
    }
};