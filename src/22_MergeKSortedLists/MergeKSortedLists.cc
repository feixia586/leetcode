#include <vector>
#include <queue>
#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

struct less_than {
  bool operator() (const ListNode* lhs, const ListNode* rhs) const {
    return lhs->val > rhs->val;
  }
};
class Solution {
public:
  ListNode *mergeKLists(vector<ListNode *> &lists) {
    int len = lists.size();
    if (len == 0)
      return NULL;

    priority_queue<ListNode*, vector<ListNode*>, less_than> pq;
    for (int i = 0; i < len; i++)
      if (lists[i] != NULL)
        pq.push(lists[i]);

    if (pq.empty())
      return NULL;
    ListNode* head = pq.top(), *p = pq.top();
    pq.pop();
    if (head->next != NULL) pq.push(head->next);

    while(!pq.empty()) {
      p->next = pq.top();
      pq.pop();
      p = p->next;
      if(p->next != NULL)
        pq.push(p->next);
    }

    return head;
  }
};
