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
    ListNode* swapPairs(ListNode* head) {
        vector<int> v;
        ListNode* curr= head;
        while(curr){
            v.push_back(curr->val);
            curr=  curr->next;
        }
        int i=0, j=1;
        while(j<v.size()){
            swap(v[i], v[j]);
            i+=2;
            j+=2;
        }

        for(auto i:v){
            cout << i << " ";
        }


        curr=head;
        int ptr = 0;
        while(curr){
            curr->val = v[ptr++];
            curr=curr->next;
        }

        return head;
    }
};