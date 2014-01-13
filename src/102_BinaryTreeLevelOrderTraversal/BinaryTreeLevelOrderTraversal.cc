#include <vector>
#include <iostream>
#include <queue>

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
  vector<vector<int> > levelOrder(TreeNode *root) {
    vector<vector<int> > res;
    vector<int> level_vec;
    if (root == NULL) return res;

    queue<TreeNode *> que;
    que.push(root);
    int crnt_level = 1;
    int next_level = 0;
    while(!que.empty()) {
      TreeNode *node = que.front();
      que.pop();
      crnt_level--;
      if (node) {
        level_vec.push_back(node->val);
        que.push(node->left);
        que.push(node->right);
        next_level += 2;
      }
      if (crnt_level == 0) {
        if (!level_vec.empty()) {
          res.push_back(level_vec);
          level_vec.clear();
        }
        crnt_level = next_level;
        next_level = 0;
      }
    }
    return res;
  }

};
