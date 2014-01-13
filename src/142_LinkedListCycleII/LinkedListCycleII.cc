#include <iostream>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  // Corner cases: only one node
  ListNode *detectCycle(ListNode *head) {
    if (head == NULL || head->next == NULL) return NULL;
    ListNode *slow = head, *fast = head;

    while(fast != NULL && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
      if (fast == slow) break;
    }

    if (fast == slow) {
      fast = head;
      while(fast != slow) { fast = fast->next; slow = slow->next; }
      return slow;
    }
    else
      return NULL;
  }

};
