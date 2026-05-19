class Solution {
public:
    void getArr(ListNode* head, vector<int> &arr){
        ListNode* temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
    }
    void revArr(vector<int> &arr, int left, int right){
        int l = left-1, r = right-1; // here i corrected it
        while(l < r){
            swap(arr[l], arr[r]);
            l++, r--;
        }
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> arr;
        getArr(head, arr);
        revArr(arr, left, right);
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        for(auto i: arr){
            temp->next = new ListNode(i);
            temp = temp->next;
        }
        return dummy->next;
    }
};