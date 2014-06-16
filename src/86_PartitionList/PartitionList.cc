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
  ListNode *partition(ListNode *head, int x) {
    if (head == NULL || head->next == NULL) {
      return head;
    }

    ListNode leftDummy(0);
    ListNode rightDummy(0);
    ListNode *leftTail = &leftDummy, *rightTail = &rightDummy;

    while (head != NULL) {
      if (head->val < x) {
        leftTail->next = head;
        leftTail = leftTail->next;
      } else {
        rightTail->next = head;
        rightTail = rightTail->next;
      }

      head = head->next;
    }

    leftTail->next = rightDummy.next;
    rightTail->next = NULL;

    return leftDummy.next;
  }
};
