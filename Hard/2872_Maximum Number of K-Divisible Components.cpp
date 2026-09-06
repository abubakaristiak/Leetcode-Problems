/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-21 || 15:51:02
 * * * * File    : _2872_Maximum Number of K-Divisible Components.cpp
 */



// https://leetcode.com/problems/maximum-number-of-k-divisible-components/description/



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

class Solution {
public:
    long long dfs(int node, int parent, int &ans, vector<int> adj[], vector<int> &values, int &k){
    long long sum = values[node];
    for(auto it:adj[node]){
        if(it!=parent){
            sum+=dfs(it, node, ans, adj, values, k);
        }
    }
    if(sum%k==0){
        ans++;
        return 0;
    }
    return sum; 
    }


    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<int> adj[n];
        for(auto val: edges){
            adj[val[0]].push_back(val[1]);
            adj[val[1]].push_back(val[0]);
        }
        int ans=0;
        dfs(0, -1, ans, adj, values, k);
        return ans;
    }
};