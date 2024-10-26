//https://leetcode.com/problems/height-of-binary-tree-after-subtree-removal-queries/description/

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



// main part
class Solution {
public:
    int level[1000001];
    int height[1000001];
    int levelMaxHt[1000001];
    int levelSecondMaxHt[1000001];

    int findHeight(TreeNode* root, int l){
        if(!root){
            return 0;
        }
        level[root->val]=l;
        height[root->val]=max(findHeight(root->left,l+1),findHeight(root->right,l+1))+1;

        if(levelMaxHt[l] < height[root->val]){
            levelSecondMaxHt[l]=levelMaxHt[l];
            levelMaxHt[l]=height[root->val];
        }
        else if(levelSecondMaxHt[l] < height[root->val]){
            levelSecondMaxHt[l]=height[root->val];
        }
        return height[root->val];
    }
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        
        findHeight(root,0);
        vector<int> res;
        for(int &node:queries){
            int L=level[node];
            int tmpRes=L+(levelMaxHt[L]==height[node] ? levelSecondMaxHt[L] : levelMaxHt[L])-1;
            res.push_back(tmpRes);
        }
        return res;

    }
};