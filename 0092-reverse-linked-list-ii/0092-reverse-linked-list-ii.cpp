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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v;

        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }

        reverse(v.begin()+left-1, v.begin()+right);
        
        
        temp=head;
        int i = 0;
        while(temp){
            temp->val = v[i];
            cout << temp->val << " ";
            i += 1;
            temp=temp->next;
        }

        

        return head;
    }
};