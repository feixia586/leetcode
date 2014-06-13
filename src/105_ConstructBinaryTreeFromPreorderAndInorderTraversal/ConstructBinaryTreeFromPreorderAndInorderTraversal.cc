#include <vector>
#include <assert.h>
#include <stdlib.h>

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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        assert(preorder.size() == inorder.size());
        if (preorder.size() == 0) {
            return NULL;
        }

        TreeNode *root = recr_BuildTree(preorder, 0, inorder, 0, inorder.size() - 1);
        return root;
    }

    TreeNode *recr_BuildTree(vector<int> &pre, int pre_idx, vector<int> &in, int inLow, int inHigh) {
        if (inLow > inHigh) {
            return NULL;
        }

        TreeNode *node = new TreeNode(pre[pre_idx]);
        int in_idx = search_inorder(in, pre[pre_idx], inLow, inHigh);
        if (in_idx == -1) {
            exit(1);
        }

        node->left = recr_BuildTree(pre, pre_idx + 1, in, inLow, in_idx - 1);
        node->right = recr_BuildTree(pre, pre_idx + in_idx - inLow + 1, in, in_idx + 1, inHigh);

        return node;
    }

    int search_inorder(vector<int> &in, int val, int inLow, int inHigh) {
        for(int i = inLow; i <= inHigh; i++) {
            if (in[i] == val) {
                return i;
            }
        }

        return -1;
    }
};
