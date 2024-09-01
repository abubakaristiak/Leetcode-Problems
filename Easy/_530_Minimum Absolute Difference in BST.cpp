//TODO: https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/
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
    void inOrder(TreeNode* root, vector<int> &v){
        if(root == NULL) return;
        inOrder(root->left,v);
        v.push_back(root->val);
        inOrder(root->right,v);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        inOrder(root, v);
        int minimum = INT_MAX;
        for(int i=0; i<v.size()-1; i++){
            minimum = min(minimum, v[i+1]-v[i]);
        }
        return minimum;
    }
};
*/