/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-15 || 08:54:35
 * * * * File    : _547_Number of Provinces.cpp
 */


// https://leetcode.com/problems/number-of-provinces/description/?envType=study-plan-v2&envId=leetcode-75


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
    int n;
    void dfs(vector<vector<int>>& isConnected, int u, vector<bool> &vis){
        vis[u]=true;
        for(int v=0; v<n; v++){
            if(!vis[v] && isConnected[u][v]==1){
                dfs(isConnected, v, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        n=isConnected.size();
        vector<bool> vis(n,false);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfs(isConnected, i, vis);
                cnt++;
            }
        }
        return cnt;
    }
};