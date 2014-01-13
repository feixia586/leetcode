#include <iostream>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  bool hasCycle(ListNode *head) {
    if (head == NULL) return false;
    ListNode *slow = head, *fast = head;
    while (fast->next != NULL && fast->next->next != NULL
           && fast->next != slow && fast->next->next != slow) {
      slow = slow->next;
      fast = fast->next->next;
    }
    if (fast->next == NULL || fast->next->next == NULL) return false;
    else return true;

  }
};
