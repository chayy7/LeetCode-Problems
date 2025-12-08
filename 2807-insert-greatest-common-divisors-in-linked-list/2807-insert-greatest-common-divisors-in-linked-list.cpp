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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }

        vector<int> gcd;
        for(int i=1;i<v.size();i++){
            gcd.push_back(__gcd(v[i-1],v[i]));

        }
        vector<int> ans;
        for(int i=0;i<min(v.size(),gcd.size());i++){
            ans.push_back(v[i]);
            ans.push_back(gcd[i]);
        }
        ans.push_back(v.back());
        for(auto i:ans){
            cout << i << " ";
        }

        if(ans.empty()) return nullptr;

        ListNode* c= new ListNode(v[0]);
        ListNode* curr=c;

        for(int i=1;i<ans.size();i++){
            curr->next=new ListNode(ans[i]);
            curr=curr->next;
        }

        return c;
    }
};