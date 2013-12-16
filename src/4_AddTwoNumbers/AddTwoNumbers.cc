#include <iostream>
// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode* res = new ListNode(0);
    ListNode* rp = res;
    ListNode* p1 = l1;
    ListNode* p2 = l2;

    int flag = 0;
    while(p1 != NULL && p2 != NULL) {
      rp->val = p1->val + p2->val + flag;
      flag = 0;
      if(rp->val >= 10) {
        rp->val -= 10;
        flag = 1;
      }

      p1 = p1->next;
      p2 = p2->next;
      if(p1 != NULL && p2 != NULL) {
        rp->next = new ListNode(0);
        rp = rp->next;
      }
    }

    if(p1 == NULL && p2 != NULL) {
      for ( ; p2 != NULL; p2 = p2->next) {
        rp->next = new ListNode(0);
        rp = rp->next;
        rp->val = p2->val + flag;
        flag = 0;
        if(rp->val >= 10) {
          rp->val -= 10;
          flag = 1;
        }
      }
    } else if (p2 == NULL && p1 != NULL) {
      for ( ; p1 != NULL; p1 = p1->next) {
        rp->next = new ListNode(0);
        rp = rp->next;
        rp->val = p1->val + flag;
        flag = 0;
        if(rp->val >= 10) {
          rp->val -= 10;
          flag = 1;
        }
      }
    }

    if (flag != 0)
      rp->next = new ListNode(flag);

    return res;
  }
};
