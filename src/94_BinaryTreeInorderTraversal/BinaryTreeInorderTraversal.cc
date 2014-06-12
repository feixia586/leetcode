#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class Solution {
public:
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> res;
    if (root == NULL) {
      return res;
    }

    //recr_inorder(res, root);
    nonrecr_inorder(res, root);
    return res;
  }

  /***********************************************************************
   * Recursive Method
   ***********************************************************************/
  void recr_inorder(vector<int> &res, TreeNode *root) {
    if (root == NULL) return;

    recr_inorder(res, root->left);
    res.push_back(root->val);
    recr_inorder(res, root->right);
  }

  /***********************************************************************
   * Iterative Method
   ***********************************************************************/
  void nonrecr_inorder(vector<int> &res, TreeNode *root) {
    if (root == NULL) return;

    stack<TreeNode *> stk;
    while (root != NULL || !stk.empty()) {
      if (root != NULL) {
        stk.push(root);
        root = root->left;
      } else {
        TreeNode *node = stk.top();
        stk.pop();
        res.push_back(node->val);
        root = node->right;
      }
    }
  }
};
