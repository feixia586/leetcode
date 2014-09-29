#include <iostream>

using namespace std;

// Definition for binary tree with next pointer.
struct TreeLinkNode {
  int val;
  TreeLinkNode *left, *right, *next;
  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution {
public:
  void connect(TreeLinkNode *root) {
    if (root == NULL) {
      return;
    }

    TreeLinkNode *prevHead = root;
    while (prevHead) {
      TreeLinkNode *crntHead = NULL;
      TreeLinkNode *p = NULL;
      for (; prevHead; prevHead = prevHead->next) {
        if (prevHead->left == NULL && prevHead->right == NULL) { continue; }
        if (crntHead == NULL) {
          crntHead = prevHead->left ? prevHead->left : prevHead->right;
        }

        if (prevHead->left) {
          if (p) { p->next = prevHead->left; p = p->next; }
          else { p = prevHead->left; }
        }
        if (prevHead->right) {
          if (p) { p->next = prevHead->right; p = p->next; }
          else { p = prevHead->right; }
        }
      }

      prevHead = crntHead;
    }
  }
};
