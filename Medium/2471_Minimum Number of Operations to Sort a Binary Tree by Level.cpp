/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-23 || 17:02:39
 * * * * File    : _2471_Minimum Number of Operations to Sort a Binary Tree by Level.cpp
 */


// https://leetcode.com/problems/minimum-number-of-operations-to-sort-a-binary-tree-by-level/description/



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


int cntMinSwaps(vector<int> &v){
    int swaps=0;
    vector<int> sortedv(v.begin(), v.end());
    sort(sortedv.begin(), sortedv.end());

    unordered_map<int, int> mp;
    for(int i=0; i<v.size(); i++){
        mp[v[i]]=i;
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]==sortedv[i]){
            continue;
        }
        int curIdx=mp[sortedv[i]];
        mp[v[i]]=curIdx;
        mp[v[curIdx]]=i;
        swap(v[curIdx], v[i]);
        swaps++;
    }
    return swaps++;
}


class Solution {
public:
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        int res=0;
        while (!q.empty())
        {
            int n=q.size();
            vector<int> v;
            while (n--)
            {
                TreeNode* tmp=q.front();
                q.pop();
                v.push_back(tmp->val);

                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }
            }
            res+=cntMinSwaps(v);
        }
        return res;
        
    }
};