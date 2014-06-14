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
  TreeNode *sortedArrayToBST(vector<int> &num) {
    if (num.size() == 0) {
      return NULL;
    }

    return sortedArrayToBSTHelper(num, 0, num.size() - 1);
  }

  TreeNode *sortedArrayToBSTHelper(vector<int> &num, int low, int high) {
    if (low > high) {
      return NULL;
    }

    int mid = low + (high - low) / 2;
    TreeNode * node = new TreeNode(num[mid]);
    node->left = sortedArrayToBSTHelper(num, low, mid - 1);
    node->right = sortedArrayToBSTHelper(num, mid + 1, high);

    return node;
  }
};
