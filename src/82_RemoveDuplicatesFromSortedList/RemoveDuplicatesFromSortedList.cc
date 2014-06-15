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

    ListNode *p = head;
    ListNode *tmp;
    while (p->next != NULL) {
      if (p->val == p->next->val) {
        tmp = p->next;
        p->next = p->next->next;
        delete tmp;
      } else {
        p = p->next;
      }
    }

    return head;
  }
};
