//https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/description/

#include<bits/stdc++.h>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    #define ll long long
    void traverse(TreeNode *root, vector<ll>& level_sum, int level){
        if(!root) return ;
        else{
            if(level_sum.size()==level){
                level_sum.push_back(root->val);
            }
            else{
                level_sum[level] += root->val;
            }
            traverse(root->left, level_sum, level+1);
            traverse(root->right, level_sum, level+1);
        }
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<ll> level_sum;
        traverse(root, level_sum, 0);
        if(level_sum.size() < k) return -1;
        else{
            sort(level_sum.rbegin(),level_sum.rend());
            return level_sum[k-1];
        }
    }
};