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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;

        for(auto i:lists){
            ListNode* temp= i;
            while(temp){
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(v.begin(),v.end());
        for(auto i: v){
            cout << i << " ";
        }


        if(v.empty()) return nullptr;
        ListNode* head= new ListNode(v[0]);
        ListNode* curr= head;
        
        for(int i=1;i<v.size();i++){
            curr->next= new ListNode(v[i]);
            curr=curr->next;
        }



        return head;
    }
};