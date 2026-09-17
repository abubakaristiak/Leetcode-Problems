/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-16 || 09:24:49
 * * * * File    : _1466_Reorder Routes to Make All Paths Lead to the City Zero.cpp
 */


// https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero/description/?envType=study-plan-v2&envId=leetcode-75


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

class Solution {
public:
    int cnt=0;
    void dfs(int node, int parent, vector<vector<pair<int, int>>> &adj, vector<bool> &vis){
        vis[node]=true;

        for(auto [child, sign]:adj[node]){
            if(!vis[child]){
                cnt+=sign;
                dfs(child, node, adj, vis);

            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> adj(n);
        for(auto &vec:connections){
            int a=vec[0];
            int b=vec[1];
            adj[a].push_back({b,1});
            adj[b].push_back({a,0});
        }
        vector<bool> vis(n, false);
        dfs(0, -1, adj, vis);
        return cnt;
    }
};
