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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        struct ListNode *ptr1 = list1;
        if(list1 == NULL)
        {
        	return list2;
        }
        if(list2 == NULL)
        {
        	return list1;
        }
        
        while(list1->next != NULL)
        {
            list1 = list1->next;
        }
        list1->next = list2;
        //complete node present in ptr1
        struct ListNode *current = ptr1;
        struct ListNode *index;
        int temp;
        
        
         while(current!=NULL)
        {
            index = current->next;

            while(index!=NULL)
            {
                if(current->val > index->val)
                {
                    temp = current->val;
                    current->val = index->val;
                    index->val = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
        return ptr1;
    }
};