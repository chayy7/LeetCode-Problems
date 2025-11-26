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

        if(!head ) return head;
        ListNode* temp=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }

        int i = 0;
        int j=i+1;
        while(i < v.size() && j < v.size()){
            swap(v[i],v[j]);
            i+=2;
            j+=2;

        }
        for(auto i:v){
            cout << i << " ";
        }
        temp=head;

        int c= 0;
        while(temp){
            temp->val=v[c++];
            temp=temp->next;
        }


        return head;
    }
};