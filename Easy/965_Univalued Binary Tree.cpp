//  TODO: https://leetcode.com/problems/univalued-binary-tree/
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

/*
class Solution {
public:
    bool search(TreeNode* root, int v)
    {
        if(root == NULL) return true;
        return (root->val == v) && search(root->left,v) && search(root->right,v);
    }

    bool isUnivalTree(TreeNode* root) {
        int v = root->val;
        return search(root, v);
    }
};
*/