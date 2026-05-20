class Solution {
public:
    void getArr(ListNode* head, vector<int> &arr){
        ListNode* temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        
        int row = lists.size();
        for(int i=0;i<row;i++){
            getArr(lists[i], arr);
        }
        sort(arr.begin(), arr.end());
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        for(auto i: arr){
            temp->next = new ListNode(i);
            temp = temp->next;
        }
        return dummy->next;
    }
};