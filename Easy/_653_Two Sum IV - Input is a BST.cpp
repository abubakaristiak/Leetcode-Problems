// TODO: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/
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
        if(!root) return;
        inOrder(root->left,v);
        v.push_back(root->val);
        inOrder(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root) 
            return false;
        if(!root->left && !root->right) 
            return false;
        vector<int> v;
        inOrder(root,v);
        int start = 0;
        int end = v.size()-1;
        while(start < end){
            if(v[start] + v[end] == k) 
                return true;
            if(v[start] + v[end] < k){
                start++;
            } 
            if(v[start] + v[end] > k){
                end--;
            }
        }
        return false;
    }
};
*/