#include <iostream>

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
  bool hasPathSum(TreeNode *root, int sum) {
    if (root == NULL) {
      return false;
    }

    return hasPathSumHelper(root, 0, sum);
  }

  bool hasPathSumHelper(TreeNode *root, int crntSum, int sum) {
    if (root == NULL) {
      return false;
    }

    crntSum += root->val;
    if (root->left == NULL && root->right == NULL) {
      if (crntSum == sum) {
        return true;
      }
      else {
        return false;
      }
    }

    return hasPathSumHelper(root->left, crntSum, sum) || hasPathSumHelper(root->right, crntSum, sum);
  }
};
