// TODO: https://leetcode.com/problems/deepest-leaves-sum/
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
    int maxHeight(TreeNode* root)
    {
        if(root == NULL) return 0;
        int l = maxHeight(root->left);
        int r = maxHeight(root->right);
        return max(l,r) +1;
    }
    int deepestLeavesSum(TreeNode* root) {
        int h = maxHeight(root);

        queue<pair<TreeNode* , int>> q;
        q.push({root, 1});
        int ans=0;
        while(!q.empty())
        {
            pair<TreeNode* , int> pr = q.front();
            q.pop();
            TreeNode* node = pr.first;
            int level = pr.second;

            if(level == h){
                ans+=node->val;
            }
            if(node->left) q.push({node->left, level+1});
            if(node->right) q.push({node->right, level+1});
        }
        return ans;
    }
};

*/