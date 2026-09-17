// https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



// main part;
class Solution {
public:
    void dfs(TreeNode* root, int cur, int &cnt){
        if(root==nullptr) return;
        if(root->val>=cur){
            cur=root->val;
            cnt++;
        }
        dfs(root->left, cur, cnt);
        dfs(root->right, cur, cnt);

    }
    int goodNodes(TreeNode* root) {
        int cnt=0;
        dfs(root, root->val, cnt);
        return cnt;
    }
};