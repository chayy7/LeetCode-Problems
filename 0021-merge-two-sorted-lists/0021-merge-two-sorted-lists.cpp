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
        ListNode* temp1=list1;
        while(temp1){
            v1.push_back(temp1->val);
            temp1=temp1->next;
        }

        vector<int> v2;
        ListNode* temp2=list2;
        while(temp2){
            v2.push_back(temp2->val);
            temp2=temp2->next;
        }

        vector<int> v3;
        for(auto i:v1){
            v3.push_back(i);
        }
        for(auto i:v2){
            v3.push_back(i);
        }

        sort(v3.begin(),v3.end());

        if(v3.empty()) return nullptr;
        ListNode* c = new ListNode(v3[0]);
        ListNode* curr = c;

        for(int i=1;i<v3.size();i++){
            curr->next=  new ListNode(v3[i]);
            curr= curr->next;
        }
        return c;
    }
};