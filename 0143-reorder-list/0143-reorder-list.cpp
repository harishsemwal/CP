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
    void reorderList(ListNode* head) {
        if (!head || !head->next)
            return;
        
        vector<int> vt;
        ListNode* temp = head;
        while(temp != NULL){
            vt.push_back(temp->val);
            temp = temp->next;
        }
        
        vector<int> store;
        int n = vt.size();
        
        for(int i = 0;i < n/2; i++){
            store.push_back(vt[i]);
            store.push_back(vt[n-i-1]);
        }
        if (n % 2 == 1)
            store.push_back(vt[n / 2]);
        
        temp = head;
        for(auto x: store){
            temp->val = x;
            temp = temp->next;
        }
    }
};