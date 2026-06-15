class Solution {
public:
    void getNodes(ListNode* head, vector<int> &arr){
        ListNode* temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
    }
    ListNode* deleteMiddle(ListNode* head) {
        vector<int> arr;
        getNodes(head, arr);
        int n = arr.size();
        int mid = n/2;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(i != mid){
                ans.push_back(arr[i]);
            }
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        for(int i: ans){
            temp->next = new ListNode(i);
            temp = temp->next;
        }
        return dummy->next;
    }
};
