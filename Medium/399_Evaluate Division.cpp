/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-17 || 09:28:27
 * * * * File    : _399_Evaluate Division.cpp
 */


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
    void dfs(unordered_map<string, vector<pair<string, double>>> &adj, string src, string dst,  unordered_set<string> &vis, double product, double &ans){
        if(vis.find(src)!=vis.end()){
            return;
        }
        vis.insert(src);
        if(src==dst){
            ans=product;
            return;
        }
        for(auto p:adj[src]){
            string v=p.first;
            double val=p.second;
            dfs(adj, v, dst, vis, product*val, ans);
        }
    }

    
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int n=equations.size();
        unordered_map<string, vector<pair<string, double>>> adj;

        for(int i=0; i<n; i++){
            string u=equations[i][0];
            string v=equations[i][1];
            double val=values[i];

            adj[u].push_back({v,val});
            adj[v].push_back({u,1.0/val});
        }

        vector<double>res;
        for(auto &query:queries){
            string src=query[0];
            string dst=query[1];
            double ans=-1.0;
            double product=1.0;

            if(adj.find(src)!=adj.end()){
                unordered_set<string> vis;
                dfs(adj, src, dst, vis, product, ans);
            }
            res.push_back(ans);
        }
        return res;
        
    }
};