#include <iostream>
#include <assert.h>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    if (head == NULL || n == 0) {
      return head;
    }

    ListNode dummy(0);
    dummy.next = head;
    ListNode *prev = &dummy, *slow = head, *quick = head;
    for (int i = 0; i < n; i++) {
      assert(quick != NULL);
      quick = quick->next;
    }

    while (quick != NULL) {
      prev = prev->next;
      slow = slow->next;
      quick = quick->next;
    }

    prev->next = slow->next;
    delete slow;

    return dummy.next;
  }
};
