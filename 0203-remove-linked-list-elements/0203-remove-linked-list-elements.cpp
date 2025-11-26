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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        vector<int> v;
        ListNode* temp=head;
        while(temp){
            if(temp->val != val) v.push_back(temp->val);
            temp=temp->next;
        }

        for(auto i:v){
            cout << i << " ";
        }

        if(v.empty()) return nullptr;

        ListNode *temp2=new ListNode(v[0]);
        ListNode *temp1=temp2;

        for(int i=1;i<v.size();i++){
            temp1->next=new ListNode(v[i]);
            temp1=temp1->next;
        }


        return temp2;


    }
};