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
    if (head == NULL) {
      return NULL;
    }

    ListNode *slow = head, *fast = head;
    bool moved = false;
    while (fast->next != NULL && fast->next->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
      moved = true;
      if (slow == fast) {
        break;
      }
    }

    if (slow == fast && moved) {
      fast = head;
      while (fast != slow) { slow = slow->next; fast = fast->next; }
      return slow;
    } else {
      return NULL;
    }
  }

};
