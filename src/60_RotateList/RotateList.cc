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
    if (head == NULL || head->next == NULL) return head;

    // refine k
    ListNode* pq = head;
    int count = 0;
    while (pq != NULL) { count++; pq = pq->next; }
    k = k % count;
    if (k == 0) return head;

    // get ready for modification
    ListNode dummy(0);
    dummy.next = head;
    ListNode *p = &dummy, *q = &dummy;
    int i = 0;
    while(i < k) { q = q->next; i++; }
    while(q->next != NULL) {p = p->next; q = q->next;};

    // modify
    ListNode* pos = &dummy;
    while (p->next != NULL) {
      ListNode *tmp = p->next;
      p->next = tmp->next;
      tmp->next = pos->next;
      pos->next = tmp;
      pos = pos->next;
    }

    return dummy.next;
  }
};
