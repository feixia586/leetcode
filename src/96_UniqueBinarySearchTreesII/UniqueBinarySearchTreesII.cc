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
  vector<TreeNode *> generateTrees(int n) {
    return recr_generate(1, n);
  }

  vector<TreeNode *> recr_generate(int start, int end) {
    if(end < start) { return vector<TreeNode *>(1, NULL); }

    vector<TreeNode *> res;
    for (int i = start; i <= end; i++) {
      vector<TreeNode *> leftSubTrees = recr_generate(start, i-1);
      vector<TreeNode *> rightSubTrees = recr_generate(i+1, end);
      for (size_t l = 0; l < leftSubTrees.size(); l++) {
        for (size_t r = 0; r < rightSubTrees.size(); r++) {
          TreeNode* node = new TreeNode(i);
          node->left = leftSubTrees[l];
          node->right = rightSubTrees[r];
          res.push_back(node);
        }
      }
    }

    return res;
  }
};
