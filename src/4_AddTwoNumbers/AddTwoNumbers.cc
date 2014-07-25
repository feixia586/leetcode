#include <iostream>
// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
      if (l1 == NULL && l2 == NULL) {
        return NULL;
      }

      ListNode dummy(0);
      ListNode *p = &dummy;

      int carry = 0;
      while (l1 && l2) {
        int val = l1->val + l2->val + carry;
        p->next = new ListNode(val % 10);

        carry = val / 10;
        p = p->next;
        l1 = l1->next;
        l2 = l2->next;
      }

      while (l1) {
        int val = l1->val + carry;
        p->next = new ListNode(val % 10);
        carry = val / 10;
        p = p->next;
        l1 = l1->next;
      }
      while (l2) {
        int val = l2->val + carry;
        p->next = new ListNode(val % 10);
        carry = val / 10;
        p = p->next;
        l2 = l2->next;
      }

      if (carry > 0) {
        p->next = new ListNode(carry);
      }

      return dummy.next;
    }
};
