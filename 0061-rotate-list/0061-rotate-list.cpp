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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;

        int n = 0;
        ListNode *temp=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            n++;
            temp=temp->next;
        }
        // cout << n;
        k %= n;
        if(k == 0) return head;
        // cout << k;


        reverse(v.begin(), v.begin() + (n - k));  
        reverse(v.begin() + (n - k), v.end());
        reverse(v.begin(), v.end()); 

        temp=head;
        int i = 0;
        while(temp){
            temp->val = v[i];
            i+=1;
            temp=temp->next;
        }


        return head;
    }
};