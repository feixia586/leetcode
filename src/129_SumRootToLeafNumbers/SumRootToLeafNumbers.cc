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
  int sumNumbers(TreeNode *root) {
    if (root == NULL) {
      return 0;
    }

    int crntNum = 0, sum = 0;
    sumNumbersHelper(crntNum, sum, root);

    return sum;
  }

  void sumNumbersHelper(int crntNum, int &sum, TreeNode* root) {
    if (root == NULL) {
      return;
    }

    crntNum = 10 * crntNum + root->val;

    if (root->left == NULL && root->right == NULL) {
      sum += crntNum;
      return;
    }

    sumNumbersHelper(crntNum, sum, root->left);
    sumNumbersHelper(crntNum, sum, root->right);
  }
};
