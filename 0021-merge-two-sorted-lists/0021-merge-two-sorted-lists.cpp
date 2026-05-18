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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        vector<int> v1;
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        while(l1){
            v1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2){
            v1.push_back(l2->val);
            l2=l2->next;
        }
        sort(v1.begin(), v1.end());
        if(v1.empty()) return nullptr;
        ListNode* newLL = new ListNode(v1[0]);
        ListNode* curr = newLL;
        for(int i=1;i<v1.size();i++){
            curr->next= new ListNode(v1[i]);
            curr = curr->next;
        }
        return newLL;
        
    }
};