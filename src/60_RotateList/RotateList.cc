#include <iostream>

//Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *rotateRight(ListNode *head, int k) {
    if (head == NULL || k == 0) {
      return head;
    }

    // refine k
    int len = getLength(head);
    k = k % len;

    ListNode dummy(0);
    dummy.next = head;
    ListNode *p = &dummy, *q = &dummy;

    for (int i = 0; i < k; i++) { p = p->next; }
    while (p->next != NULL) {
      p = p->next;
      q = q->next;
    }

    p->next = head;
    dummy.next = q->next;
    q->next = NULL;

    return dummy.next;
  }

  int getLength(ListNode *head) {
    int n = 0;
    ListNode *p = head;
    while (p != NULL) {
      p = p->next;
      n++;
    }

    return n;
  }
};
