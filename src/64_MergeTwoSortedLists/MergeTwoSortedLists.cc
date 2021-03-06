#include <iostream>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (l1 == NULL) {
      return l2;
    }
    if (l2 == NULL) {
      return l1;
    }

    ListNode dummy(0);
    ListNode *p = &dummy;

    while (l1 != NULL && l2 != NULL) {
      if (l1->val < l2->val) {
        p->next = l1;
        l1 = l1->next;
      } else {
        p->next = l2;
        l2 = l2->next;
      }

      p = p->next;
    }

    while (l1 != NULL) {
      p->next = l1;
      p = p->next;
      l1 = l1->next;
    }
    while (l2 != NULL) {
      p->next = l2;
      p = p->next;
      l2 = l2->next;
    }

    return dummy.next;
  }

  /*****************************************************
   * Not Recommended
   *****************************************************/
  ListNode *anotherMethod(ListNode *l1, ListNode *l2) {
    if (l1 == NULL) return l2;
    else if (l2 == NULL) return l1;

    ListNode *head = l1;
    if (l1->val > l2->val) { l1 = l2; l2 = head; head = l1;}

    ListNode *p = l1, *q = l2, *pre_p = l1;
    while(p != NULL && q != NULL) {
      if (p->val <= q->val) { pre_p = p; p = p->next; }
      else {
        pre_p->next = q;
        q = q->next;
        pre_p = pre_p->next;
        pre_p->next = p;
      }
    }

    if (q != NULL)
      pre_p->next = q;

    return head;

  }
};
