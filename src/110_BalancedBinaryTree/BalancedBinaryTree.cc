#include <algorithm>

using namespace std;

// Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ResultType {
    int depth;
    bool balance;
    ResultType(int depth, bool balance) : depth(depth), balance(balance) {}
};

class Solution {
public:
    bool isBalanced(TreeNode *root) {
        if (root == NULL) return true;

        ResultType rt = isBalancedHelper(root);
        return rt.balance;
    }

    ResultType isBalancedHelper(TreeNode *root) {
        if (root == NULL) {
            ResultType rt(0, true);
            return rt;
        }

        ResultType leftRes = isBalancedHelper(root->left);
        ResultType rightRes = isBalancedHelper(root->right);
        if (leftRes.balance == true && rightRes.balance == true && abs(leftRes.depth - rightRes.depth) <= 1) {
            ResultType rt(max(leftRes.depth, rightRes.depth) + 1, true);
            return rt;
        } else {
            ResultType rt(max(leftRes.depth, rightRes.depth) + 1, false);
            return rt;
        }
    }

};
