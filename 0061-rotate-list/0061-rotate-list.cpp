class Solution {
public:
    void llarr(ListNode* head, vector<int>& arr){
        if(!head) return ;
        ListNode* temp=head;

        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        vector<int> arr;
        llarr(head, arr);

        k %= arr.size();
        reverse(arr.begin(), arr.begin()+arr.size()-k);
        reverse(arr.begin()+arr.size()-k, arr.end());
        reverse(arr.begin(), arr.end());

        for(auto i:arr){
            cout << i << " ";

        }

        ListNode* temp=head;
        int ptr = 0;
        while(temp){
            temp->val = arr[ptr++];
            temp=temp->next;
        }

        return head;

        
    }
};