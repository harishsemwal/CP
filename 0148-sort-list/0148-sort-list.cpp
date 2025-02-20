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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        vector<int> list;
        while(head){
            list.push_back(head->val);
            head = head->next;
        }
        sort(list.begin(), list.end());
        ListNode * res = new ListNode(list[0]);
        ListNode *result = res;
        for(int i = 1; i < list.size(); i++){
            ListNode * node = new ListNode(list[i]);
            res->next = node;
            res = res->next;
        }
        return result;
    }
};