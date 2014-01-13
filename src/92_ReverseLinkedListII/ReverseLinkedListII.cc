#include <cassert>
#include <iostream>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *reverseBetween(ListNode *head, int m, int n) {
    // assume that m and n is valid
    assert(n >= m);
    if (head == NULL || head->next == NULL || n == m) return head;

    ListNode dummy(0);
    dummy.next = head;
    ListNode *pre = &dummy, *last = head, *crnt  = head->next;
    int i = 1;
    while(i < m) { i++; pre = last; last = last->next; }
    crnt = last->next;
    while(i < n) {
      i++;
      last->next = crnt->next;
      crnt->next = pre->next;
      pre->next = crnt;
      crnt = last->next;
    }

    return dummy.next;
  }

};
