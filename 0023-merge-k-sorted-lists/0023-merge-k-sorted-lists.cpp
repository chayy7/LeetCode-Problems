class Solution {
public:
    void getArr(vector<ListNode*>& lists, vector<int>& v){
        for(auto i:lists){
            ListNode* temp = i;
            while(temp){
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        getArr(lists, v);

        sort(v.begin(), v.end());
        for(auto i:v){
            cout << i << " ";
        }

        if(v.empty()) return nullptr;
        ListNode* newLL = new ListNode(v[0]);
        ListNode* temp= newLL;
        for(int i=1;i<v.size();i++){
            temp->next= new ListNode(v[i]);
            temp=temp->next;
        }
        return newLL;
    }
};