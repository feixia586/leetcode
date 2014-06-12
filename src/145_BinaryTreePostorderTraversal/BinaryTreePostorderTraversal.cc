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
  vector<int> postorderTraversal(TreeNode *root) {
    vector<int> res;
    if (root == NULL) return res;

    // recr_postorder(root, res);
    // return res;

    iter_postorder_A(root, res);
    return res;

    //return iter_postorder(root);
  }

  /***********************************************************************
   * Recursive Method
   ***********************************************************************/
  void recr_postorder(TreeNode *root, vector<int> &res) {
    if (root == NULL) return;
    recr_postorder(root->left, res);
    recr_postorder(root->right, res);
    res.push_back(root->val);
  }

  /***********************************************************************
   * Iterative Method -- recommended
   ***********************************************************************/
  void iter_postorder_A(TreeNode *root, vector<int> &res) {
    if (root == NULL) {
      return;
    }

    stack<TreeNode *> stk;
    TreeNode *pre = NULL;
    stk.push(root);
    while (!stk.empty()) {
      TreeNode *crnt = stk.top();
      // if no children or children are visited
      if ((crnt->left == NULL && crnt->right == NULL) ||
          (pre != NULL && (pre == crnt->left || pre == crnt->right))) {
        res.push_back(crnt->val);
        stk.pop();
        pre = crnt;
      } else {
        if (crnt->right) stk.push(crnt->right);
        if (crnt->left) stk.push(crnt->left);
      }
    }
  }

  /***********************************************************************
   * Iterative Method -- not recommended
   ***********************************************************************/
  vector<int> iter_postorder(TreeNode *root) {
    vector<int> res;
    if (root == NULL) return res;

    TreeNode *pre = NULL;
    stack<TreeNode *> stk;
    stk.push(root);
    while(!stk.empty()) {
      TreeNode *crnt = stk.top();
      if (pre == NULL || pre->left == crnt || pre->right == crnt) {
        if (crnt->left) stk.push(crnt->left);
        else if (crnt->right) stk.push(crnt->right);
        else { res.push_back(crnt->val); stk.pop(); }
      } else if (crnt->left == pre) {
        if (crnt->right) stk.push(crnt->right);
        else {res.push_back(crnt->val); stk.pop(); }
      } else {
        res.push_back(crnt->val);
        stk.pop();
      }

      pre = crnt;
    }
    return res;
  }


};
