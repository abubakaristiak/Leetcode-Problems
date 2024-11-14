/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-14 || 11:32:40
 * * * * File    : _841_Keys and Rooms.cpp
 */

// https://leetcode.com/problems/keys-and-rooms/description/?envType=study-plan-v2&envId=leetcode-75


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
    void dfs(vector<vector<int>>& rooms, int source, vector<bool> &vis){
        vis[source]=true;
        for(int &node:rooms[source]){
            if(!vis[node]){
                dfs(rooms, node, vis);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n,false);
        dfs(rooms, 0, vis);
        for(bool x:vis){
            if(x==false){
                return false;
            }
        }
        return true;
    }
};