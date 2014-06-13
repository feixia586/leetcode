#include <vector>
#include <stdlib.h>
#include <assert.h>

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
  TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
    assert(inorder.size() == postorder.size());
    if (inorder.size() == 0) {
      return NULL;
    }

    TreeNode *root = recr_buildTree(postorder, postorder.size()-1, inorder, 0, inorder.size()-1);
    return root;
  }

  TreeNode *recr_buildTree(vector<int> &post, int post_idx, vector<int> &in, int inLow, int inHigh) {
    if (inLow > inHigh) {
      return NULL;
    }

    TreeNode *node = new TreeNode(post[post_idx]);
    int in_idx = search_inorder(in, post[post_idx], inLow, inHigh);
    if (in_idx == -1) {
      exit(1);
    }

    node->left = recr_buildTree(post, post_idx - (inHigh - in_idx) - 1 , in, inLow, in_idx - 1);
    node->right = recr_buildTree(post, post_idx - 1, in, in_idx + 1, inHigh);

    return node;
  }

  int search_inorder(vector<int> &in, int val, int inLow, int inHigh) {
    for (int i = inLow; i <= inHigh; i++) {
      if (in[i] == val) {
        return i;
      }
    }

    return -1;
  }
};
