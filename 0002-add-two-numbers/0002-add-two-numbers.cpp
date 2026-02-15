class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s1= "";
        ListNode* temp= l1;
        while(temp){
            s1 += temp->val + '0';
            temp=temp->next;
        }

        temp = l2;
        string s2= "";
        while(temp){
            s2 += temp->val + '0';
            temp=temp->next;
        }

        vector<int> v;
        int i= 0;
        int j= 0;
        int car =0;
        while(i <= s1.size()-1 || j<=s2.size()-1 || car){
            int sum = car;
            if(i < s1.size()) sum += s1[i++] -'0';
            if(j < s2.size()) sum += s2[j++] -'0';
            v.push_back(sum % 10);
            car = sum/10;
        }
        ListNode* newll = new ListNode(v[0]);
        ListNode* curr= newll;
        for(int i=1;i<v.size();i++){
            curr->next = new ListNode(v[i]);
            curr = curr->next;
        }
        return newll;
    }
};