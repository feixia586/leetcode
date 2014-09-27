#include <climits>
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
  bool isValidBST(TreeNode *root) {
    if (root == NULL) {
      return true;
    }

    //int prev = INT_MIN;
    //return isValidBSTHelper_M1(root, prev);
    return isValidBSTHelper_M2(root, INT_MIN, INT_MAX);
  }

  /*******************************************************************
   * inorder traversal method -- recommended
   *******************************************************************/
  bool isValidBSTHelper_M1(TreeNode *root, int &prev) {
    if (root == NULL) {
      return true;
    }

    if (!isValidBSTHelper_M1(root->left, prev)) {
      return false;
    }

    if (prev >= root->val) {
      return false;
    }
    prev = root->val;

    if (!isValidBSTHelper_M1(root->right, prev)) {
      return false;
    }

    return true;
  }

  /*******************************************************************
   * restrict low and high method
   *******************************************************************/
  bool isValidBSTHelper_M2(TreeNode *root, int low, int high) {
    if (root == NULL) {
      return true;
    }

    if (root->val > low && root->val < high) {
      return isValidBSTHelper_M2(root->left, low, root->val)
        && isValidBSTHelper_M2(root->right, root->val, high);
    }
    return false;
  }
};
