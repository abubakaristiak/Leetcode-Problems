//https://leetcode.com/problems/cousins-in-binary-tree-ii/description/

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

class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        if(root==NULL) return root;
        queue<TreeNode*> q;
        q.push(root);
        vector<int> levelSum;

        //find sum of each level and store in levelSum array
        while(!q.empty()){
            int curlevelSum=0;
            int n=q.size();
            while(n--){
                TreeNode* cur=q.front();
                q.pop();
                curlevelSum+=cur->val;
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            levelSum.push_back(curlevelSum);
        }

        //update each node value with cousin sum
        q.push(root);
        root->val = 0;
        int i=1;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                TreeNode* cur=q.front();
                q.pop();
                int siblingSum = cur->left != NULL ? cur->left->val:0;
                siblingSum+= cur->right != NULL ? cur->right->val:0;
                if(cur->left){
                    cur->left->val = levelSum[i]-siblingSum;
                    q.push(cur->left);
                }
                if(cur->right){
                    cur->right->val = levelSum[i]-siblingSum;
                    q.push(cur->right);
                }
            }
            i++;
        }
        return root;
    }
};