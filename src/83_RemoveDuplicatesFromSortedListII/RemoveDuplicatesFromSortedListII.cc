#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *deleteDuplicates(ListNode *head) {
    if (head == NULL || head->next == NULL) {
      return head;
    }

    ListNode *dummy = new ListNode(0);
    ListNode *prev = dummy;
    dummy->next = head;

    ListNode *tmp;
    while (prev->next != NULL && prev->next->next != NULL) {
      if (prev->next->val == prev->next->next->val) {
        int val = prev->next->val;
        while (prev->next != NULL && prev->next->val == val) {
          tmp = prev->next;
          prev->next = prev->next->next;
          delete tmp;
        }
      } else {
        prev = prev->next;
      }
    }

    return dummy->next;
  }
};
