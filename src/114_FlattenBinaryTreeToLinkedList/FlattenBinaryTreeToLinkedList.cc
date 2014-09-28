#include <iostream>

// Definition for binary tree
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  void flatten(TreeNode *root) {
    if (root == NULL) {
      return;
    }

    // method 1
    flattenHelper(root);

    // method 2
    // TreeNode *lastOne = NULL;
    // flattenHelperM2(root, lastOne);
  }

  /*******************************************************
   * Method 1
   *******************************************************/
  TreeNode *flattenHelper(TreeNode *root) {
    if (root == NULL) {
      return NULL;
    }

    TreeNode *p = root;
    TreeNode *savedRight = p->right;

    p->right = flattenHelper(p->left);
    p->left = NULL;
    while (p->right) { p = p->right; }
    p->right = flattenHelper(savedRight);

    return root;
  }

  /*******************************************************
   * Method 2
   *******************************************************/
  void flattenHelperM2(TreeNode *root, TreeNode *&lastOne) {
    if (root == NULL) {
      return;
    }

    if (lastOne != NULL) {
      lastOne->left = NULL;
      lastOne->right = root;
    }
    lastOne = root;

    TreeNode *savedRight = root->right;
    flattenHelperM2(root->left, lastOne);
    flattenHelperM2(savedRight, lastOne);
  }

  /*******************************************************
   * Method 3
   *******************************************************/
  void IterWay(TreeNode *root) {
    if (root == NULL) {
      return;
    }

    while (root != NULL) {
      if (root->left != NULL) {
        TreeNode *node = root->left;
        while (node->right) node = node->right;
        node->right = root->right;
        root->right = root->left;
        root->left = NULL;
      }
      root = root->right;
    }
  }
};
