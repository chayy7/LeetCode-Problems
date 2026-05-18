class Solution {
public:
    void getNodes(ListNode* head, vector<int> &arr){
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> arr;
        getNodes(head, arr);
        
        
        // this is so important
        for(int i=0;i<arr.size();i+=k){
            if(i+k <= arr.size()){
                reverse(arr.begin()+i, arr.begin()+i+k);
            }
        }
        for(auto i:arr){
            cout << i << " ";
        }
        ListNode* ans = head;
        ListNode* temp = ans;
        for(auto i : arr){
            temp->val = i;
            temp = temp->next;
        }
    
   
        return ans;
    }
};