/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-18 || 22:57:53
 * * * * File    : _112_Path Sum.cpp
*/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


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
    bool solve(TreeNode* root, int sum, int &targetSum){
        if(root==NULL   ){
            return false;
        }
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                return true;
            }
        }
        bool l=solve(root->left, sum, targetSum);
        bool r=solve(root->right, sum, targetSum);
        return l || r;
        
    }


    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        bool res=solve(root, sum, targetSum);
        return res;
    }
};