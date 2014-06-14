#include <algorithm>
#include <iostream>
#include <assert.h>

using namespace std;

// Definition for binary tree
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  void recoverTree(TreeNode *root) {
    if (root == NULL) {
      return;
    }

    TreeNode *prev = NULL, *p1 = NULL, *p2 = NULL;
    recr_inorder(root, prev, p1, p2);

    swap(p1->val, p2->val);
  }

  // This is O(logN) method, because we use recursion (stack)
  void recr_inorder(TreeNode *root, TreeNode *&prev, TreeNode *&p1, TreeNode *&p2) {
    if (root == NULL) {
      return;
    }

    recr_inorder(root->left, prev, p1, p2);

    if (prev != NULL && root->val < prev->val) {
      if (p1 == NULL) {
        p1 = prev;
      }
      p2 = root;
    }
    prev = root;

    recr_inorder(root->right, prev, p1, p2);
  }
};
