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
      TreeLinkNode *pre = NULL;
      for (; prevHead; prevHead = prevHead->next) {
        if (prevHead->left == NULL && prevHead->right == NULL) { continue; }
        if (crntHead == NULL) {
          crntHead = prevHead->left ? prevHead->left : prevHead->right;
        }

        if (prevHead->left) {
          if (pre) { pre->next = prevHead->left; pre = pre->next; }
          else { pre = prevHead->left; }
        }
        if (prevHead->right) {
          if (pre) { pre->next = prevHead->right; pre = pre->next; }
          else { pre = prevHead->right; }
        }
      }

      prevHead = crntHead;
    }
  }
};
