class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        vector<int> v1;
        ListNode* temp= list1;
        int i=0;
        while(temp){
            if(i < a || i > b){
                v1.push_back(temp->val);

            }
            i++;
            temp=temp->next;
        }
        vector<int> v2;
        ListNode* temp1= list2;
        while(temp1){
            v2.push_back(temp1->val);
            temp1=temp1->next;
        }

        // vector<int> 

        // for(auto i:v1){
        //     cout << i << " ";
        // }
        // cout << endl;

        vector<int> ans;
        int c = a-1;
        int j=0;
        for(auto i:v1){
            ans.push_back(i);
            if(j == c){
                for(auto k:v2){
                    ans.push_back(k);
                }
            }
            j++;
        }

        for(auto i:ans){
            cout << i << " ";
        }

        if(ans.empty()) return nullptr;

        ListNode* ansans= new ListNode(ans[0]);
        ListNode* curr= ansans;
        for(int i=1;i<ans.size();i++){
            curr->next = new ListNode(ans[i]);
            curr= curr->next;
        }
        return ansans;
    }
};