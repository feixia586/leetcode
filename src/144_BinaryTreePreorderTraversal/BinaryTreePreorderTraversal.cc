#include <vector>
#include <stack>
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
    // vector<int> res;
    // recr_preorder(root, res);
    // return res;

    // return iter_preorderA(root);
    return iter_preorderB(root);
  }

  /**************************************************************
   * Recursive Method
   **************************************************************/
  void recr_preorder(TreeNode *root, vector<int> &res) {
    if (root == NULL) return;
    res.push_back(root->val);
    recr_preorder(root->left, res);
    recr_preorder(root->right, res);
  }

  /**************************************************************
   * Iterative Method A
   **************************************************************/
  vector<int> iter_preorderA(TreeNode *root) {
    vector<int> res;
    if (root == NULL) return res;

    stack<TreeNode *> stk;
    stk.push(root);
    while(!stk.empty()) {
      TreeNode *node = stk.top();
      stk.pop();
      res.push_back(node->val);
      if (node->right) stk.push(node->right);
      if (node->left) stk.push(node->left);
    }

    return res;
  }
  /**************************************************************
   * Iterative Method B
   **************************************************************/
  vector<int> iter_preorderB(TreeNode *root) {
    vector<int> res;
    if (root == NULL) return res;

    stack<TreeNode *> stk;
    TreeNode *p = root;
    while(p || !stk.empty()) {
      if (p) { res.push_back(p->val); stk.push(p); p = p->left;}
      else {p = stk.top(); stk.pop(); p = p->right;}
    }
    return res;
  }

};
