/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-27 || 12:44:34
 * * * * File    : _3243_Shortest Distance After Road Addition Queries I.cpp
 */


// https://leetcode.com/problems/shortest-distance-after-road-addition-queries-i/description/


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
    unordered_map<int, vector<int>> adj;
    int bfs(int n){
        queue<int> q;
        q.push(0);
        vector<bool> vis(n, false);
        vis[0]=true;

        int level=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                int node=q.front();
                q.pop();
                if(node==n-1){
                    return level;
                }
                for(int &child:adj[node]){
                    if(!vis[child]){
                        q.push(child);
                        vis[child]=true;
                    }
                }
            }
            level++;
        }
        return -1;
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        for(int i=0; i<n-1; i++){
            adj[i].push_back(i+1);
        }
        int q=queries.size();
        vector<int> res;
        for(auto &query:queries){
            int u=query[0];
            int v=query[1];
            adj[u].push_back(v);
            int d=bfs(n);
            res.push_back(d);
        }
        
        return res;

    }
};