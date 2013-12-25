#include <iostream>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *reverseKGroup(ListNode *head, int k) {
    if (head == NULL || k <= 1)
      return head;

    ListNode dummy(0);
    dummy.next = head;
    ListNode *p = &dummy, *q = head;
    int i = 0;
    while (q) {
      q = q->next;
      i++;
      if (i % k == 0) {
        p = reverseList(p, q);
      }
    }

    head = dummy.next;
    return head;
  }

  ListNode *reverseList(ListNode *pre, ListNode *next) {
    ListNode *last = pre->next;
    ListNode *cur = last->next;

    while (cur != next) {
      last->next = cur->next;
      cur->next = pre->next;
      pre->next = cur;
      cur = last->next;
    }

    return last;
  }
};
