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
    if (head == NULL || head->next == NULL) return head;

    ListNode *p = head, *q;
    ListNode *sp, *pre_sp;
    while(p->next != NULL) {
      q = p->next;
      sp = head;
      while (sp != q) {
        if (sp->val <= q->val) { pre_sp = sp; sp = sp->next; }
        else break;
      }
      if (sp == q) p = p->next;
      else if (sp == head) { head = q;  p->next = q->next; q->next = sp; }
      else {pre_sp->next = q; p->next = q->next; q->next = sp;}
    }

    return head;
  }
};
