#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    if (head == NULL || n == 0)
      return head;

    ListNode *p  = head, *q = head, *r = head;
    for (int i = 0; i < n; i++)
      q = q->next;

    while(q != NULL) {r = p; p = p->next; q = q->next;}

    if (p == head) {
      head = p->next;
      delete p;
    } else {
      r->next = p->next;
      delete p;
    }

    return head;
  }
};
