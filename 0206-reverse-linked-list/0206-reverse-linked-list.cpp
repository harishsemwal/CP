
class Solution {
public:
    ListNode* reverseList(ListNode *root) {
        ListNode* prev = NULL;
        ListNode* cur = root;
        while (cur) {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};