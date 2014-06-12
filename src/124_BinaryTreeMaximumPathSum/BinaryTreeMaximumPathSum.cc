#include <algorithm>
#include <climits>

using namespace std;

// Definition for binary tree
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ResultType {
  int subTreeMax, allMax;  // subTreeMax: the max path of left subtree or right subtree, INCLUDING root
  ResultType(int subTreeMax, int allMax) : subTreeMax(subTreeMax), allMax(allMax) {}
};

class Solution {
public:
  int maxPathSum(TreeNode *root) {
    if (root == NULL) {
      return 0;
    }

    ResultType rt = maxPathSumHelper(root);
    return rt.allMax;
  }


  ResultType maxPathSumHelper(TreeNode *root) {
    if (root == NULL) {
      ResultType rt(0, INT_MIN);
      return rt;
    }

    ResultType leftRT = maxPathSumHelper(root->left);
    ResultType rightRT = maxPathSumHelper(root->right);
    int crntSubTreeMax = root->val + max(max(leftRT.subTreeMax, rightRT.subTreeMax), 0);
    int crntAcrossMax = max(leftRT.subTreeMax, 0) + root->val + max(rightRT.subTreeMax, 0);
    int crntAllMax = max(max(leftRT.allMax, rightRT.allMax), crntAcrossMax);

    ResultType rt(crntSubTreeMax, crntAllMax);
    return rt;
  }

};
