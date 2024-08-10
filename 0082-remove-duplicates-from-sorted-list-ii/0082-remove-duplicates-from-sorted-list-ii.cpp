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
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* current = dummy;

    while (current->next != nullptr && current->next->next != nullptr) {
        if (current->next->val == current->next->next->val) {
            int duplicateValue = current->next->val;

            while (current->next != nullptr && current->next->val == duplicateValue) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
        } else {
            current = current->next;
        }
    }

    return dummy->next;
    }
};