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
        ListNode *crt = nullptr, *head, *sel;
        int ok = 1;
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;
        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val < list2->val)
            {    
                sel = list1;
                list1 = list1->next;
            }
            else
            {    
                sel = list2;
                list2 = list2->next;
            }
            if (ok)
            {  
                head = sel;
                ok = 0;  
            }
            else  
                crt->next = sel;
            crt = sel;
        }
        if (list1 != NULL)
            crt->next = list1;
        if (list2 != NULL)
            crt->next = list2;    
        return head;
    }
};
