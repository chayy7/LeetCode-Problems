/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while (temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int n = v.size();
        int grp = 1;
        while (i < n) {
            int st = i;
            int end = min(i + grp - 1, n - 1);
            int len = end - st + 1;

            if (len % 2 == 0) {
                reverse(v.begin() + st, v.begin() + end + 1);
            }

            i = end + 1;
            grp++;
        }

        for (auto i : v) {
            cout << i;
        }

        temp = head;
        int cnt = 0;
        while (temp) {
            temp->val = v[cnt++];
            temp = temp->next;
        }

        return head;
    }
};