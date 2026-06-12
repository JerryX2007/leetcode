/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int recurse(TreeNode* root, int depth) {
        if (root==NULL) return depth;
        return max(recurse(root->left, depth+1), recurse(root->right, depth+1));
    }
    int maxDepth(TreeNode* root) {
        return recurse(root, 0);
    }
};