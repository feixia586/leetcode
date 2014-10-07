#include <iostream>

using namespace std;

// Definition for singly-linked list with a random pointer.
struct RandomListNode {
  int label;
  RandomListNode *next, *random;
  RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

class Solution {
public:
  RandomListNode *copyRandomList(RandomListNode *head) {
    if (head == NULL) {
      return NULL;
    }

    RandomListNode *p = head;
    while (p != NULL) {
      RandomListNode *node = new RandomListNode(p->label);
      node->next = p->next;
      p->next = node;
      p = node->next;
    }

    p = head;
    while (p != NULL) {
      if (p->random) {
        p->next->random = p->random->next;
      } else {
        p->next->random = NULL;
      }
      p = p->next->next;
    }

    p = head;
    RandomListNode dummy(0);
    RandomListNode *crnt = &dummy;
    while (p != NULL) {
      crnt->next = p->next;
      crnt = crnt->next;
      p->next = p->next->next;
      p = p->next;
    }

    return dummy.next;
  }
};
