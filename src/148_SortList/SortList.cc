#include <iostream>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *sortList(ListNode *head) {
    return mergeSortList(head);
  }

  ListNode* mergeSortList(ListNode *head) {
    if (!head || !head->next) return head;

    int len = 0;
    ListNode *p = head, *q, *pre_q;
    while(p) { p = p->next; len++; }
    int mid = len / 2;

    p = head; q = head;
    for (int i = 0; i < mid; i++) { pre_q = q; q = q->next; }
    pre_q->next = NULL;
    p = mergeSortList(p);
    q = mergeSortList(q);

    // merge
    ListNode *newHead = p, *pre_p;
    if (p->val > q->val) { p = q; q = newHead; newHead = p; }
    while (p && q) {
      if (p->val <= q->val) { pre_p = p; p = p->next; }
      else {
        pre_p->next = q;
        q = q->next;
        pre_p = pre_p->next;
        pre_p->next = p;
      }
    }

    if (q) pre_p->next = q;

    return newHead;
  }
};
