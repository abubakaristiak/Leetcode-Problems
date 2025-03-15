/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-15 || 14:59:56
 * * * * File    : 110. Balanced Binary Tree.cpp
*/


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
    int height(TreeNode* root){
        if(!root){
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        if(l==-1 || r==-1 || abs(l-r)>1){
            return -1;
        }
        return max(l,r)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        return height(root)!=-1;
    }
};