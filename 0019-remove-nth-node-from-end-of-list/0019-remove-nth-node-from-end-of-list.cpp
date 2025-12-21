// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* prev = -1;
//         ListNode* justPrev = head;
//         ListNode* curr = temp->next;
         
//         int len = 0;
//         ListNode* temp = head;
//         while(temp){
//             len++;
//             temp = temp->next;
//         }
//         int deleteNode = len - n;
//         while()
//         // 1 min baby, i ll comment this
//     }
// };








class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> v;
        ListNode* temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        
        int s = v.size()-n;
        
        vector<int> v1;
        for(int i=0;i<v.size();i++){
            if(i != s) v1.push_back(v[i]);
        }
        
        if (v1.size() == 0) return NULL;

        
        // for(auto i:v1){
        //     cout << i << " ";
        // }
        
        ListNode* newll = new ListNode(v1[0]);
        ListNode* curr= newll;
        for(int i=1;i<v1.size();i++){
            curr->next = new ListNode(v1[i]);
            curr=curr->next;
        }
        
        
        return newll;
    }
};