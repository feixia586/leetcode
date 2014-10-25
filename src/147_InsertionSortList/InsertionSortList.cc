#include <iostream>
// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
  ListNode *insertionSortList(ListNode *head) {
    if (head == NULL || head->next == NULL) {
      return head;
    }

    ListNode dummy(0);
    dummy.next = head;

    ListNode *crnt = head->next, *next;
    head->next = NULL; // note this!!!

    ListNode *d;
    while (crnt != NULL) {
      next = crnt->next;
      d = &dummy;
      while (d->next != NULL && crnt->val > d->next->val) {
        d = d->next;
      }
      crnt->next = d->next;
      d->next = crnt;

      crnt = next;
    }

    return dummy.next;
  }
};
