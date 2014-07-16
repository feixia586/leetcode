#include <iostream>
#include <vector>

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
  vector<vector<int> > pathSum(TreeNode *root, int sum) {
    vector<vector<int> > res;
    if (root == NULL) {
      return res;
    }

    vector<int> path;
    pathSum(res, path, 0, root, sum);

    return res;
  }

  void pathSum(vector<vector<int> > &res, vector<int> &path, int crntSum, TreeNode *root, int sum) {
    if (root == NULL) {
      return;
    }

    path.push_back(root->val);
    crntSum += root->val;
    if (root->left == NULL && root->right == NULL) {
      if (crntSum == sum) {
        res.push_back(path);
      }
      path.pop_back();
      crntSum -= root->val;
      return;
    }

    pathSum(res, path, crntSum, root->left, sum);
    pathSum(res, path, crntSum, root->right, sum);
    path.pop_back();
    crntSum -= root->val;
  }
};
