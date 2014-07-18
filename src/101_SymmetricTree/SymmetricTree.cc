#include <vector>
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
  bool isSymmetric(TreeNode *root) {
    if (root == NULL) {
      return true;
    }

    //return isSymRecr(root->left, root->right);
    return isSymIter(root);
  }

  /*****************************************************************
   * Iterative Method
   *****************************************************************/
  bool isSymIter(TreeNode *root) {
    if (root == NULL) {
      return true;
    }

    vector<TreeNode *> level;
    level.push_back(root);
    while (level.size() != 0) {
      int size = level.size();
      for (int i = 0; i < size; i++) {
        TreeNode *node = level[i];
        if (node == NULL) { continue; }

        level.push_back(node->left);
        level.push_back(node->right);
      }

      level.erase(level.begin(), level.begin() + size);
      int low = 0, high = level.size() - 1;
      while (low < high) {
        if (level[low] == NULL || level[high] == NULL) {
          if(level[low] != level[high]) {
            return false;
          } else {
            low++;
            high--;
            continue;
          }
        }
        if (level[low]->val != level[high]->val) {
          return false;
        }
        low++;
        high--;
      }
    }

    return true;
  }

  /*****************************************************************
   * Recursion Method
   *****************************************************************/
  bool isSymRecr(TreeNode *left, TreeNode *right) {
    if (left == NULL || right == NULL) {
      return left == right;
    }

    if (left->val != right->val) {
      return false;
    }

    if (!isSymRecr(left->left, right->right)) {
      return false;
    }
    if (!isSymRecr(left->right, right->left)) {
      return false;
    }

    return true;
  }
};
