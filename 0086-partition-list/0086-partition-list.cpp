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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }


        vector<int> ls;
        vector<int> gs;
        for(auto i:v){
            if(i < x){
                ls.push_back(i);
            }else{
                gs.push_back(i);
            }
        }

        vector<int> ans;
        for(auto i:ls){
            ans.push_back(i);
        }
        for(auto i:gs){
            ans.push_back(i);
        }


        for(auto i:ans){
            cout <<  i << " ";
        }

        int i=0;
        temp=head;
        while(temp){
            temp->val=ans[i++];
            temp=temp->next;
        }
        return head;
    }
};