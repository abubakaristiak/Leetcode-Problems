/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-20 || 15:41:17
 * * * * File    : _2415_Reverse Odd Levels of Binary Tree.cpp
 */


// https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/description/



#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level=0;

        while(!q.empty()){
            int n=q.size();
            vector<TreeNode*> levelnodes;
            while(n--){
                TreeNode* tmp=q.front();
                q.pop();
                levelnodes.push_back(tmp);
                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }
            }

            if(level%2==1){
                int l=0, r=levelnodes.size()-1;
                while(l<r){
                    int tmpVal=levelnodes[l]->val;
                    levelnodes[l]->val=levelnodes[r]->val;
                    levelnodes[r]->val=tmpVal;
                    l++, r--;
                }
            }
            level++;
        }
        return root;

    }
};