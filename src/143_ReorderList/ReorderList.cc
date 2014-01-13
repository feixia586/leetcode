#include <iostream>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
 void reorderList(ListNode *head) {
    if (head == NULL || head->next == NULL) return;

    ListNode *slow = head, *fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
    }

    ListNode *fastHead = slow->next;
    slow->next = NULL;
    ListNode *reversedHead = reverse(fastHead);
    ListNode *slowHead = head;
    while(reversedHead != NULL) {
      ListNode *tmp = reversedHead->next;
      reversedHead->next = slowHead->next;
      slowHead->next = reversedHead;
      slowHead = reversedHead->next;
      reversedHead = tmp;
    }
  }

  ListNode* reverse(ListNode *head) {
    if (head == NULL || head->next == NULL) return head;

    ListNode dummy(0);
    dummy.next = head;
    ListNode *pre = &dummy, *p = head, *q;
    while(p->next != NULL) {
      q = p->next;
      p->next = q->next;
      q->next = pre->next;
      pre->next = q;
    }
    return pre->next;
  }

};
