class Solution {
public:
    void getArr(ListNode* head, vector<int> &arr){
        ListNode* temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp ->next;
        }
    }
    ListNode* partition(ListNode* head, int x) {
        vector<int> arr;
        getArr(head, arr);
        
        
        vector<int>left, right;
        for(auto i: arr){
            if(i < x){
                left.push_back(i);
            }else{
                right.push_back(i);
            }
        }
        
        ListNode* temp = head;
        for(auto i: left){
            temp->val = i;
            temp = temp->next;
        }
        for(auto i: right){
            temp->val = i;
            temp = temp->next;
        }
        return head;
    }
};