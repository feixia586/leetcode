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
  // Note the *&, reference to pointer
  // The inorder traversal is :  1 3 4 6 7 8 10 13 14. If we change the value 4
  // and 8:  1 3 8 6 7 4 10 13 14, when it goes to the node 6, now the pre->val
  // = 8, check if pre<current node, which is wrong here (8>6). So we store the
  // first pointer pointing to the node 8 and second pointer pointing to the
  // node 6. To do so, we have stored the wrong nodes, if every other node keep
  // the correct order, then swapping these nodes is enough for the problem. In
  // other words, after the whole traversal, what we need to do is just
  // changing the values of the first and second. Continue our example here,
  // when the traversal goes to the node 4, now the node 7 is its pre, which is
  // also wrong, so the second wrong node is found, and we change the second
  // pointer pointing to node 4.

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
