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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }


        vector<int> ans;
        for(int i=0;i<v.size();i++){
            int maxi=v[i];
            for(int j=i+1;j<v.size();j++){
                if(maxi < v[j]){
                    maxi=v[j];
                    break;
                }
                
                // break;
            }

            if(v[i] == maxi) {
                ans.push_back(0);
            }else{

                ans.push_back(maxi);
            }
            

        }

        for(auto i:ans){
            cout << i << " ";
        }

        return ans;
    }
};