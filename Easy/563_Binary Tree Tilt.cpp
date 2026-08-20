//TODO: https://leetcode.com/problems/binary-tree-tilt/description/
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
    int tiltSum = 0;
    int countSum(TreeNode* root)
    {
        if(root == NULL) return 0;
        int l = countSum(root->left);
        int r = countSum(root->right);
        int tilt = abs(l-r);
        tiltSum += tilt;
        return root->val + l + r;


    }
    int findTilt(TreeNode* root) {
        countSum(root);
        return tiltSum;
    }
};
*/