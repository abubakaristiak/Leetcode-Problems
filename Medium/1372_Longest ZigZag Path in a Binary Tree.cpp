/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-08 || 13:08:23
 * * * * File    : _1372_Longest ZigZag Path in a Binary Tree.cpp
 */

//https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
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



// main part;
class Solution {
public:
    int mx=0;
    void solve(TreeNode* root, int steps, bool goLeft){
        if(root==nullptr) return;
        mx=max(mx,steps);
        if(goLeft==true){
            solve(root->left, steps+1, false);
            solve(root->right, 1, true);
        }
        else{
            solve(root->right, steps+1, true);
            solve(root->left, 1,false);
        }
    }
    int longestZigZag(TreeNode* root) {
        solve(root, 0, true);
        solve(root, 0, false);
        return mx;
        
    }
};