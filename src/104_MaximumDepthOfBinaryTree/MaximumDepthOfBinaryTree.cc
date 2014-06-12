#include <iostream>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL){};
};

class Solution {
public:
  int maxDepth(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }

        int leftMax = maxDepth(root->left);
        int rightMax = maxDepth(root->right);
        return max(leftMax, rightMax) + 1;
    }
};
