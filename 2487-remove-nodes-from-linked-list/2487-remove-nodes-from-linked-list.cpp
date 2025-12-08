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
    ListNode* removeNodes(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        int max=INT_MIN;
        vector<int> ans;
        for(int i= 0;i<v.size();i++){
            if(v[i] >= max){
                ans.push_back(v[i]);
                max=v[i];
                
            }
        }
        reverse(ans.begin(),ans.end());

        for(auto i:ans){
            cout << i<< " ";
        }

        ListNode* c=new ListNode(ans[0]);
        ListNode* curr=c;

        for(int i=1;i<ans.size();i++){
            curr->next=new ListNode(ans[i]);
            curr=curr->next;
        }


        return c;
    }
};