//https://leetcode.com/problems/path-sum-iii/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;

//  Definition for a binary tree node.
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
    long long ans=0;
    void helper(TreeNode* root, long long sum){
        if(root==nullptr) return;
        if(sum==root->val) ans++;
        sum=sum-root->val;
        helper(root->left, sum);
        helper(root->right, sum);

    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return 0;
        helper(root, targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
        return ans;
        
    }
};