#include <vector>
#include <queue>
#include <algorithm>

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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        vector<vector<int> > res;
        if (root == NULL) {
            return res;
        }

        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty()) {
            int size = que.size();
            vector<int> vec;
            for (int i = 0; i < size; i++) {
                TreeNode *node = que.front();
                vec.push_back(node->val);
                que.pop();
                if (node->left) {
                    que.push(node->left);
                }
                if (node->right) {
                    que.push(node->right);
                }
            }
            res.push_back(vec);
        }

        for (size_t i = 0; i < res.size(); i++) {
            if (i % 2 != 0) {
                reverse(res[i].begin(), res[i].end());
            }
        }

        return res;
    }
};
