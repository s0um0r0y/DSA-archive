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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyVar = new ListNode(0);
        ListNode* tail = dummyVar;
        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry != 0){
            int digit1 = (l1 != NULL) ? l1->val : 0;
            int digit2 = (l2 != NULL) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            tail->next = new ListNode(digit);
            tail = tail->next;

            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }
        return dummyVar->next;
    }
};

