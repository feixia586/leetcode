#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};


// Definition for binary tree
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  TreeNode *sortedListToBST(ListNode *head) {
    if (head == NULL) {
      return NULL;
    }

    ListNode *p = head;
    int n = 0;
    while (p) { n++; p = p->next; }

    return sortedListToBSTHelper(head, 0, n-1);
  }

  // Note the *& here, refrence to pointer
  TreeNode *sortedListToBSTHelper(ListNode *&listNode, int low, int high) {
    if (low > high) {
      return NULL;
    }

    int mid = low + (high - low) / 2;
    TreeNode *left = sortedListToBSTHelper(listNode, low, mid - 1);

    TreeNode *parent = new TreeNode(listNode->val);
    parent->left = left;
    listNode = listNode->next;

    TreeNode *right = sortedListToBSTHelper(listNode, mid + 1, high);
    parent->right = right;

    return parent;
  }
};
