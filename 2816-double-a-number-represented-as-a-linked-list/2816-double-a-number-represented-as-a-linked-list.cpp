// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* doubleIt(ListNode* head) {
//         long long num=0;
//         ListNode* temp=head;
//         while(temp){
//             num = num*10+temp->val;
//             temp=temp->next;
//         }
//         num *= 2;
//         if(num == 0) return new ListNode(0);
//         // cout << num;
//         vector<long long> v;
//         while(num > 0){
//             long long rem = num%10;
//             v.push_back(rem);
//             num /= 10;
//         }

//         reverse(v.begin(),v.end());
//         // for(auto i:v){
//         //     cout << i << " ";
//         // }

//         if(v.empty()) return nullptr;

//         ListNode* c=new ListNode(v[0]);
//         ListNode* curr= c;

//         for(long long i=1;i<v.size();i++){
//             curr->next=new ListNode(v[i]);
//             curr=curr->next;
//         }


//         return c;
//     }
// };

class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        string num = "";
        ListNode* temp = head;
        while (temp) {
            num.push_back(temp->val + '0');
            temp = temp->next;
        }
        int carry=0;
        for (int i = num.size()-1; i>=0;i--) {
            int x=(num[i]-'0') * 2+carry;
            num[i]=(x % 10) + '0';
            carry=x/10;
        }
        if (carry) num.insert(num.begin(),carry+'0');
        vector<long long> v;
        for (char c:num)v.push_back(c-'0');
        ListNode* c=new ListNode(v[0]);
        ListNode* curr=c;

        for (long long i=1; i<v.size();i++) {
            curr->next=new ListNode(v[i]);
            curr=curr->next;
        }

        return c;
    }
};
