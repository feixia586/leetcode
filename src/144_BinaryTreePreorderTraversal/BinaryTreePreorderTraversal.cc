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
  vector<int> preorderTraversal(TreeNode *root) {
    vector<int> res;
    recr_preorder(root, res);
    return res;
  }

  void recr_preorder(TreeNode *root, vector<int> &res) {
    if (root == NULL) return;
    res.push_back(root->val);
    recr_preorder(root->left, res);
    recr_preorder(root->right, res);
  }

};
